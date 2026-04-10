#include <stdio.h>

int main()
{
  int n;
  long sum = 0;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++)
  {
    int r = 1;
  	for(int j = 0; j < 3; j++)
  	{
    	r *= i;
  	}
    sum += r;
  }
  printf("sum =%ld\n", sum);
  return 0;
}