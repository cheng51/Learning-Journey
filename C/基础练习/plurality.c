#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAX 9 // 宏定义

// 结构定义
typedef struct {
    char *name;
    int votes;
} candidate;

bool vote(char *name);
void print_winner();

// 全局变量及全局结构数组
int num_candidate;
candidate candidates[MAX];

int main(int argc, char *argv[])
{   
    // 检查参数
    if (argc < 2) 
    {
        printf("Usage: ./plurality [candidate ...]\n");
        return 1;
    }
    num_candidate = argc - 1;
    if (num_candidate > MAX)
    {
        printf("Maximum number of cnadidates is %d.\n", MAX);
        return 2;
    } 
    
    printf("Success.\n");
    
    // 初始化结构candidates数组
    for (int i = 0; i < num_candidate; i++)
    {
        candidates[i].name = argv[i+1];
        candidates[i].votes = 0;
    }
    
    int num_voter;
    printf("Number of voters: ");
    scanf("%d", &num_voter);

    // 投票
    for (int i = 0; i < num_voter; i++)
    {   
        char vote_name[20];
        printf("vote: ");
        scanf("%s", vote_name);
        if (vote(vote_name) == false)
        {
            printf("Invalid vote.\n");
        }
    }

    print_winner();
    





    return 0;
}

bool vote(char *name)
{   
    bool ret = false;
    for (int i = 0; i < num_candidate; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
        candidates[i].votes++;
        ret = true;
        }
    }
    return ret;
}

void print_winner()
{
    int max_vote = 0;
    for (int i = 0; i < num_candidate - 1; i++)
    {
        if (candidates[i].votes > max_vote) 
        {
            max_vote = candidates[i].votes;
        } 
    }
    for (int i = 0; i < num_candidate; i++)
    {
        if (candidates[i].votes == max_vote) 
        {
            printf("%s ", candidates[i].name);
        }
    }
    printf("\n");
}