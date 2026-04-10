#include <stdio.h>

int main()
{
  int x;
  int y;
  scanf("%d", &x);
  if(x < 1) y = x + 2;
  else if(x >= 20) y = 6 * x - 1;
  else y = 2 * x - 3;
  printf("x=%d,y=%d\n", x, y);
  return 0;
}