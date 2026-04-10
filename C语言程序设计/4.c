#include <stdio.h>

int main()
{
    int a;
    char b;
    float c;
    printf("please input an integer:");
    scanf("%d", &a);
    printf("integer: %d\n", a);
    printf("please input an character:");
    scanf(" %c", &b);
    printf("character: %c\n", b);
    printf("please input a float number:");
    scanf("%f", &c);
    printf("float: %f", c);
    return 0;
}