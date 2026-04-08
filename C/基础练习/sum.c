#include <stdio.h>

int main()
{   
    int sum = 0;
    const int min = 10;
    const int max = 31;
    int count = 0;
    for(int i = min; i <= max; i++)
    {   
        int count_j = 0;
        for(int j = 1; j <= max; j++)
        {
            double result = (float)i / j; 
            //i, j都是整数，直接相除会把小数抛弃，故应对i或j其中一个进行格式转换
            //法二：i * 1.0 / j
            if (result == (int)result)
            {
                count_j += 1;
            }
        }
        if (count_j == 2)
        {
        count += 1;
        sum += i;
        }
    }
    printf("%i ", count);
    printf("%i", sum);
    
    return 0;
}