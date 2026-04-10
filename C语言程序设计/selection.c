#include <stdio.h>

void selection_sort(int arr[], int n);

int main()
{
  int array[7] = {3, 5, 6, 4, 2, 7, 1};
  selection_sort(array, 7);
  printf("After sorted:");
    for(int i = 0; i < 6; i++)
    {
      printf("%d,", array[i]);
    }
  printf("%d\n", array[6]);
	return 0;
}

void selection_sort(int arr[], int n)
{
  for(int i = 0; i < n; i++)
  {
    int index = i;
    int min = arr[i];
    for(int j = i+1; j < n; j++)
    {
      if(min >= arr[j]) 
      {
        min = arr[j];
        index = j;
      }
    }
    if(index != i)
    {
      int tmp = arr[i];
    arr[i] = arr[index];
    arr[index] = tmp;
  	}
  }
}
