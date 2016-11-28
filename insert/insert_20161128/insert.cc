#define TEST__ME

/*
	Insert sort algorithm.
	Insert element in unsorted part into sorted part.
*/

void
insert(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = i + 1; j > 0; j--) {
			if (arr[j] < arr[j-1]) {
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			} else {
				break;
			}
		}
	}
}
