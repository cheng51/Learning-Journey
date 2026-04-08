#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define Max 9

// 定义候选人结构数组
typedef struct {
    char *name;
    int votes;
    bool eliminated;
} candidate;

candidate candidates[Max];
int candidate_count;
int voters_count;
int prefences[20][9] = {0}; // 志愿二维数组及其初始化

bool vote(int voters_count, int rank, char *name);
void tabulate();
bool print_winner();
int find_min();
bool is_tie(int min);
void eliminate(int min);


int main(int argc, char *argv[])
{
    // 检查参数
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }
    if (argc == 2)
    {
        printf("%s\n", argv[1]);
        return 2;
    }
    if (argc > 10)
    {
        printf("Maxnum of candidates is %d\n", Max);
        return 3;
    }
    printf("Success.\n");
    
    // 初始化
    printf("Number of voters: ");
    scanf("%i", &voters_count);
    candidate_count = argc - 1;
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i+1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    // 统计每人的志愿名单
    for (int i = 0; i < voters_count; i++) // 外层循环
    {
        for (int j = 0; j < candidate_count; j++) // 内层循环
        {
            char pre_name[20];  // 志愿名字
            printf("Rank %d: ", j+1);
            scanf("%s", &pre_name);
            if(!vote(i, j, pre_name)) // 把第i个投票者、第j志愿和意愿人的值传入vote函数
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }
        printf("\n"); // 统计完每人意愿之后换行
    }

    // 比较票数，不断淘汰，得到最终结果
    while(1)
    {   
        // 每次循环开始前先初始化每位候选人的票数
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }

        tabulate(); // 计算票数

        if(print_winner()) // 如果有某位候选人的票数大于一半则直接胜出
        {
            return 0; // 出口之一
        }

        int MIN = find_min(); //找最少票数
        if (is_tie(MIN)) // 若剩余候选人票数全相同则剩余的都是胜出者，平局
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (candidates[i].votes == MIN)
                {
                    printf("%s", candidates[i].name);
                }
            }
            printf("\n");
            return 5; // 出口之二
        }
        eliminate(MIN); // 在每次循环最后，淘汰票数最少者

    }

    return 0;
}

bool vote(int voter, int rank, char *name) // 传入投票者序数、意愿序数和意愿人
{   
    bool ret = false;
    for (int i = 0; i < candidate_count; i++) // 循环候选人结构数组
    {
        if (strcmp(name, candidates[i].name) == 0)  // 检索是否有这号人
        {   
            prefences[voter][rank] = i; // 有的话把该候选人序数填入意愿数组
            ret = true;
        }
    }
    return ret;
}

void tabulate()
{
    for (int i = 0; i < voters_count; i++)
    {   
        for (int j = 0; j < candidate_count; j++)
        {    
            int index = prefences[i][j]; // 读取意愿数组
            if (!candidates[index].eliminated) //先判断该候选人是否被淘汰
            {
                candidates[index].votes++; // 票数+1
                break; // 第i投票者投票成功后打断他的循环，换下一个投票者
            }
        }
    }
}

bool print_winner()
{   
    bool ret = false;
    float N = voters_count * 1.0 / 2;
    for (int i = 0; i < candidate_count; i++) // 看是否有人票数超一半
    {
        if (candidates[i].votes > N)
        {
            printf("%s\n", candidates[i].name); // 有则打印，结束程序
            ret = true;
        }
    }
    return ret;
}

int find_min()
{   
    int min = 100; // 一定要初始化成一个较大的数字，不然下面if判断会有逻辑错误
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes < min) //若min是0，票数是1，则判断一直不成立
        {
            min = candidates[i].votes;
        }
    }
    return min;
}

bool is_tie(int min)
{   
    bool ret = true;
    for(int i = 0; i< candidate_count; i++)
    {
        if (!candidates[i].eliminated)
        {
            // 只要有一个人票数大于min，则不可能是全员票数相同
            if (candidates[i].votes != min) 
            {
                ret = false;
            }
        }
    }
    return ret;
}

void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == min) 
        {
            candidates[i].eliminated = true; // 淘汰票数最少者
        }
    }
}
