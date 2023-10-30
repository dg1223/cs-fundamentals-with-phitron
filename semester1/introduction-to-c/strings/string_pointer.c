#include <stdio.h>
void fun(char arr[]) {
	arr[0] = 'G';
}

int main () {
	char arr[] = "Hello";
	fun(arr);
    printf("%s\n", arr);
	return 0;
}