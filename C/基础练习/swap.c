#include <stdio.h>

void swap(int *a, int*b);

int main()
{
    int x = 10;
    int y = 20;

    printf("%i, %i\n", x, y);

    swap(&x, &y);

    printf("%i, %i\n", x, y);

    return 0;
}

void swap(int *a, int*b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;

}