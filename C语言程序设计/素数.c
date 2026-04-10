#include <stdio.h>

int is_prime(int i);

int main()
{
    for(int i = 2; i <= 20; i++)
    {
        if(is_prime(i) == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int is_prime(int i)
{
    int ret = 1;
    int counter = 0;
    for(int j = 1; j <= i; j++) // 除数
    {
        if(i % j == 0)
        {
            counter++;
        }
    }
    if(counter > 2)
    {
        ret = 0;
    }
    return ret;
}