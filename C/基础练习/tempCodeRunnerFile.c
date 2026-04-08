#include <stdio.h>

int main() 
{
    int upper = 2;
    int lower = 1;
    int N;
    double sum = 0;
    printf("N:");
    scanf("%i", &N);
    for(int i = 1; i < N; i++)
    {
        int tmp = lower;
        sum += upper *1.0 / lower;
        lower = upper;
        upper += tmp;
    }
    printf("%.2f", sum);

    return 0;
}