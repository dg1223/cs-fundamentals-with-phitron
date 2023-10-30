// reverese an array
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int head = 0;
    int tail = n-1;
    int temp;

    while (head < tail){
        temp = arr[head];        
        arr[head] = arr[tail];
        arr[tail] = temp;
        head++;
        tail--;
    }
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}