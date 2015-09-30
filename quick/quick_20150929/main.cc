#include <stdio.h>

void quicksort(int *arr, int lo, int hi);

static void 
print(int *arr, int len)
{
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int 
main()
{
  int arr[] = {7, 10, 0, 2 ,5, 22, -1, 23};
  print(arr, sizeof(arr)/sizeof(*arr));
  quicksort(arr, 0, sizeof(arr) / sizeof(*arr));
  print(arr, sizeof(arr)/sizeof(*arr));
}
