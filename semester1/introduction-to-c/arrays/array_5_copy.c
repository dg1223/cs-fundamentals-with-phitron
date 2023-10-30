// copy elements of an array
#include<stdio.h>
int main(){
    // first array
    int n;
    scanf("%d", &n);
    int arr_1[n];
    for (int i=0; i<n; i++){
        scanf("%d", &arr_1[i]);
    }

    // second array
    int m;
    scanf("%d", &m);
    int arr_2[m];
    for (int i=0; i<m; i++){
        scanf("%d", &arr_2[i]);
    }

    // copy arr_1 and arr_2 into arr_3
    int arr_3[n+m];
    int a, small_array_counter = 0;
    // copy elements of arr_1
    for (a=0; a<n; a++){
        arr_3[a] = arr_1[a];
    }    
    // copy elements of arr_2
    // Notice that for loop increments a's value first
    // and then checks if it matches the condition
    for (int i=a; i<=a+m; i++){
        arr_3[i] = arr_2[small_array_counter];
        small_array_counter++;
    }
    // print new array
    for (int i=0; i<n+m; i++){
        printf("%d ", arr_3[i]);
    }

    return 0;
}