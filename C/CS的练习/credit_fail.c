#include <stdio.h>

int main(void) {
    long long number;
    printf("What's the number? ");
    scanf("%lld",&number);
    int a = (number / 10) % 10;
    int b = (number / 1000) % 10;
    int c = (number / 100000) % 10;
    int d = (number / 10000000) % 10;
    int e = (number / 1000000000) % 10;
    int f = (number / 100000000000) % 10;;
    int g = (number / 10000000000000) % 10;
    int h = (number / 1000000000000000) % 10;

    int sum_one = (a + b + c + d + e + f + g + h) * 2;

    int i = number % 10;
    int j = (number / 100) % 10;
    int k = (number / 10000) % 10;
    int l = (number / 1000000) % 10;
    int m = (number / 100000000) % 10;
    int n = (number / 10000000000) % 10;
    int o = (number / 1000000000000) % 10;
    int p = (number / 100000000000000) % 10;

    int sum_two = sum_one + i + j + k + l + m + n + o + p;
    
    int result = sum_two % 10;
    if(result == 0) {
        printf("%i->pass!\n",result);
    }
    else {
        printf("%i->fail!\n",result);
    }

    return 0;
    }