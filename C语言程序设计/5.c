#include <stdio.h>

int main()
{
	int a;
	printf("please input an integer:");
	scanf("%d", &a);
	if(a % 2 == 0)
	{
		printf("%i是一个偶数.\n", a);
	}
	else
	{
		printf("%i是一个奇数.\n", a);
	}
	return 0;
}