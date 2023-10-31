// print an array
#include <stdio.h>
void fun(int arr[], int n, int i){
    if (i == n){
        return;
    }
    printf("%d\n", arr[i]);
    fun(arr, n, i+1);
}

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    
    fun(array, n, 0);
    
    return 0;
}