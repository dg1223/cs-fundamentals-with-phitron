#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);
    printf("%p\n", &arr[0]);
    printf("%p\n", &arr);
    printf("%d\n", *arr);
    
    printf("%d\n", arr[1]);
    printf("%d\n", *(arr+1));
    printf("%d\n", 1[arr]);
    printf("%d\n", *(1+arr));
    return 0;
}