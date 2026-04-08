#include <stdio.h>
#include <stdbool.h>

#define MAX 9

typedef struct {
    int winner;
    int loser;
} pair;

pair pairs[50];
int preferences[20][MAX] = {0}; // [候选人i票数] - [候选人j票数] 
bool locked[MAX][MAX]; // [候选人i] -> [候选人j]
char *candidates[MAX]; // (指针数组，意思是存储MAX个char地址)候选人信息[序数][name]
int pair_count = 0;
int candidate_count = 0;
int voter_count = 0;

bool vote(int rank, char *name, int ranks[]);
void record_preference(int ranks[]);
void add_pair(void);
void sort_pairs();
bool is_cycle(int target, int current);
void lock_pairs();


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
        printf("Maxnum of candidates is %d\n", MAX);
        return 3;
    }
    printf("Success.\n");

    // 初始化
    printf("Number of voters: ");
    scanf("%i", &voter_count);
    candidate_count = argc - 1;
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            locked[i][j] = false;
        }
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i] = argv[i+1]; // 指针指向argv
    }

    
    // 统计每人的志愿名单
    for (int i = 0; i < voter_count; i++) // 外层循环
    {   
        int ranks[MAX];
        for (int j = 0; j < candidate_count; j++) // 内层循环
        {
            char pre_name[20];  // 志愿名字
            printf("Rank %d: ", j+1);
            scanf("%s", &pre_name);
            if(!vote(j, pre_name, ranks)) // 把第i个投票者、第j志愿和意愿人的值传入vote函数
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }
        // 编辑preferences
        record_preference(ranks);
        printf("\n"); // 统计完每人意愿之后换行
    }









}

bool vote(int rank, char *name, int ranks[]) // 排名，候选人name，该选民的所有排名
{
    bool ret = false;
    for (int i = 0; i < candidate_count; i++) // 循环候选人结构数组
    {
        if (strcmp(name, candidates[i]) == 0)  // 检索是否有这号人
        {   
            ranks[rank] = i; 
            ret = true;
        }
    }
    return ret;
}

void record_preference(int ranks[])
{   
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            int winner = ranks[i];
            int loser = ranks[j];
            preferences[winner][loser]++;
        }
    }
    
}

void add_pair(void)
{   
    float N = voter_count / 2.0;
    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            if (preferences[i][j] > N)
            {
                pairs[pair_count].winner = i;
                pairs[pair_count].loser = j;
                pair_count++;
            } else {
                pairs[pair_count].winner = j;
                pairs[pair_count].loser = i;
                pair_count++;
            }
        }
    }
}

void sort_pairs()
{
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {   
            if (preferences[pairs[i].winner][pairs[i].loser] < preferences[pairs[j].winner][pairs[j].loser])
            {
                pair tmp_pair;
                tmp_pair = pairs[i];
                pairs[i] = pairs[j];
                pairs[j] = tmp_pair;
            }    
        }
    }    
}


void lock_pairs()
{
    for (int i = 0; i < pair_count; i++)
    {
        if (!is_cycle(i))
        {
            
        }
    }
}

bool is_cycle(int target, int current)
{

}




























