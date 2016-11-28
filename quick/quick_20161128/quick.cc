#define TEST__ME

/*
	quick sort algorithm.
*/


static void
partition(int arr[], int low, int high) {
	if (high - low <= 1) {
		return;
	}

	// pick the pivot
	int pivot = arr[low + (high - low) / 2];
	int lowIndex = low;
	int highIndex = high - 1;

	for (; lowIndex <= highIndex; lowIndex++, highIndex--) {
		if (arr[lowIndex] >= pivot && arr[highIndex] <= pivot &&
			arr[lowIndex] != arr[highIndex]) {
			int temp = arr[lowIndex];
			arr[lowIndex] = arr[highIndex];
			arr[highIndex] = temp;
			lowIndex--;
			highIndex++;
		} else if (arr[lowIndex] >= pivot) {
			lowIndex--;
		} else if (arr[highIndex] <= pivot) {
			highIndex++;
		}
	}

	partition(arr, low, lowIndex);
	partition(arr, lowIndex + 1, high);
}

void
quick(int arr[], int length) {
	partition(arr, 0, length);
}
