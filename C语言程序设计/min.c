#include <stdio.h>

int main()
{
  int min;
  int a, b, c;
  scanf("%d,%d,%d", &a, &b, &c);
  if(a < b || a < c)
  	min = a;
  else if(b < a || b < c)
    min = b;
  else min = c;
  printf("min=%d\n", min);
  return 0;
}