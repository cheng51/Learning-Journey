#include <stdio.h>

int main()
{
    int upper;
    int lower;
    printf("Fraction: ");
    scanf("%i/%i", &upper, &lower);
    if(upper == lower)
    {
        printf("1/1\n");
        return 0;
    }
    else
    {
        for(int i = 1, max = (upper < lower) ? lower : upper; i <= max; i++)
        {
            int counter = 0;
            double result1 = upper *1.0 / i;
            if(result1 == (int)result1)
            {
                double result2 = lower *1.0 / i;
                if(result2 == (int)result2)
                {
                    upper /= i;
                    lower /= i;
                }
            }
            
        }
    }
    printf("%i/%i\n", upper, lower);
    return 0;
}

