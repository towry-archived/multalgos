#define TEST__ME 

void
insert(int arr[], int length) 
{
	int i = 0;
	int j;
	int c;
	int tmp;

	while (i < length) {
		i += 1;
		j = i - 1;
		c = i;
		while (j >= 0) {
			if (arr[c] < arr[j]) {
				// swap
				tmp = arr[c];
				arr[c] = arr[c];
				arr[j] = tmp;
				c = j;
			} else {
				break;
			}
			j -= 1;
		}
	}
}
