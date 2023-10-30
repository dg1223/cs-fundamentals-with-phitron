/**
 * T. Sort Numbers
 * Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and
 * then the values in the sequence as they were read.
 * 
 * Input
 * Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)
 * 
 * Output
 * Print the values in ascending order followed by a blank line and then the values in the sequence as
 * they were read.
*/

#include <stdio.h>

int main(){
    int length = 3, arr[length];
    for (int i=0; i<length; i++){
        scanf("%d", &arr[i]);
    }
    
    // make a copy of original array
    int arr_copy[length];
    int *source = arr;
    int *destination = arr_copy;
    for (int i=0; i<length; i++){
        *destination = *source;
        source++;
        destination++;
    }
    
    // selection sort
    for (int i=0; i<length; i++){
        for (int j=i+1; j<length; j++){
            if (arr_copy[i] > arr_copy[j]){
                // swap
                int temp = arr_copy[i];
                arr_copy[i] = arr_copy[j];
                arr_copy[j] = temp;
            }
        }
    }
    
    // generate output
    for (int i=0; i<length; i++){
        printf("%d\n", arr_copy[i]);
    }
    printf("\n");
    for (int i=0; i<length; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}