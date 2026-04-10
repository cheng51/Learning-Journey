#include <stdio.h>

long long fac(int n);

int main()
{
  double e = 1;
  double N = 1;
  for(int i = 0; i < 6; i++)
  {
    N *= 0.1;
  }
  for(int n = 1;; n++)
  {	
    if(1.0 / fac(n) < N) break;
    e += 1.0 / fac(n);
  }
  printf("%f\n", e);
  return 0;
}

long long fac(int n)
{
  if(n <= 1) return 1;
  return n * fac(n - 1);
}