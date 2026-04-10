#include <stdio.h>

int main()
{
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}