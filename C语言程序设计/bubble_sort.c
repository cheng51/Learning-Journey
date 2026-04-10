#include <stdio.h>

void bubble_sort(int arr[], int n);

int main()
{
  int arr[7] = {3, 5, 6, 4, 2, 1, 7};
  bubble_sort(arr, 7);
  printf("After sorted:");
  for(int i = 0; i < 6; i++)
  {
    printf("%d,", arr[i]);
  }
  printf("%d\n", arr[6]);
  return 0;
}

void bubble_sort(int arr[], int n)
{
    for(int j = 0; j < n-1; j++)
    {
        for(int i = 0; i < n-1; i++)
  {
    if(arr[i+1] < arr[i])
    {
      int tmp = arr[i];
      arr[i] = arr[i+1];
      arr[i+1] = tmp;
    }
  }
    }
}