#include <stdio.h>
#include <stdlib.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    
    int size;
    for (int i=0; i<testcases; i++){        
        scanf("%d", &size);
        
        int array_a[size];
        for (int i=0; i<size; i++){
            scanf("%d", &array_a[i]);
        }
        
        int array_b[size];
        // make copy of array_a
        for (int i=0; i<size; i++){
            array_b[i] = array_a[i];
        }
        // sort array_b in ascending order
        for (int i=0; i<size; i++){
            for (int j=i+1; j<size; j++){
                if (array_b[i] > array_b[j]){
                    int temp = array_b[i];
                    array_b[i] = array_b[j];
                    array_b[j] = temp;
                }
            }
        }
        // find absolute difference
        int array_c[size];
        for (int i=0; i<size; i++){
            array_c[i] = abs(array_a[i] - array_b[i]);
        }
        
        // print output
        for (int i=0; i<size; i++){
            printf("%d ", array_c[i]);
        }
        printf("\n");
    }
    return 0;
}