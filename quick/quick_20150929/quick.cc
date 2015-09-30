#define TEST__ME

// partition step
static int 
partition(int *arr, int lo, int hi) 
{
  int pivot = arr[lo + (hi - lo) / 2];
  int i, j = hi - 1, temp;

  for (i = lo; i < j; i++, j--) {
    if (arr[i] >= pivot && arr[j] <= pivot && arr[i] != arr[j]) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i--;
      j++;
    } else if (arr[i] >= pivot) {
      i--;
    } else if (arr[j] <= pivot) {
      j++;
    }
  }

  return i;
}

void 
quicksort(int *arr, int lo, int hi)
{
  if (hi - lo <= 1) {
    return;
  }

  int part = partition(arr, lo, hi);
  quicksort(arr, lo, part);
  quicksort(arr, part + 1, hi);
}
