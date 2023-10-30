// insert element into an array
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n+1];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int position, value;
    scanf("%d %d", &position, &value);
    
    // shift elements until position index
    for (int i=n; i>position; i--){
        arr[i] = arr[i-1];
    }
    
    // insert new element
    arr[position] = value;

    // print new array
    for (int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}