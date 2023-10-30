#include <stdio.h>
#include <string.h>

int main(){
    // take sizes
    int N, M;
    scanf("%d %d", &N, &M);
    
    // declare frequency array
    // numbers from 1 to M means from 0 to M-1
    // to have the M-th index in the array, we
    // need an array of size M+1
    int size = M+1;
    int numbers[size];
    for (int i=0; i<size; i++){
        numbers[i] = 0;
    }
    
    // process array input
    int number;
    for (int i=0; i<N; i++){
        scanf("%d", &number);
        numbers[number]++;
    }

    // process output
    for (int i=1; i<=M; i++){
        // if you want to print the frequency of 
        // only the numbers that were given as input
        // if (numbers[i] == 0){
        //     continue;
        // }
        // printf("%d : %d\n", i, numbers[i]);
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}