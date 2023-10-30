// arr[] -> array
// n -> size of arr[]
void fun(int arr[], int n) {
	for (int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}

int main {
	int array_size = 3;
	int arr[array_size] = {1, 2, 3};
	fun(arr, array_size);
	return 0;
}