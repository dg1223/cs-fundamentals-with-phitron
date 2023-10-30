/**
 * G. Max and MIN
 * Given an array A of size N. Print the minimum and the maximum number in the array.
 * Note: Solve this problem using function.
 * Input
 * 
 * First line will contain a number N (1 ≤ N ≤ 103) number of elements.
 * Second line will contain N numbers (0 ≤ Xi ≤ 105).
 * 
 * Output
 * Print the minimum and the maximum number separated by a space.
*/

#include <stdio.h>

void printMaxMin(int arr[], int length){
    int min = arr[0];
    int max = arr[0];
    
    for (int i=1; i<length; i++){        
        if (arr[i] < min){
            min = arr[i];
        }
        else if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d %d", min, max);
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printMaxMin(a, n);
    return 0;
}