/*
C. Choose Elements

You are given an array a of n integers, and an integer k

You can choose at most k elements and get their summation.

What is the maximum summation you can get?

Input
The first line contains two integers n
and k(1≤k≤n≤103) the number of elements in the array a
and the maximum elements you can choose respectively.

The second line contains n
integers ai(−109≤ai≤109) the elements of the array a.


Output
Output the maximum summation you can get.

2 2
1 2
>>
3
*/

/**
 * Approach:
 * 1. If choices == size, sum all elements in array.
 * 2. Else (i.e. if choices < size),
 * 2.1 sort the input array
 * 2.2 take a difference of size and choices
 * 2.3 ignore the first k elements where k = the difference
 * 2.4 sum the rest of the elements
*/

#include <stdio.h>

long long int sumElements(long long int array[], int size, int start){
    long long int result = 0;
    for (int i=start; i<size; i++){
        if (array[i] <= 0){
            continue;
        }
        result += array[i];
    }
    
    return result;
}

int main(){
    int size, choices;
    scanf("%d %d", &size, &choices);

    long long int array[size];    
    for (int i=0; i<size; i++){
        scanf("%lld", &array[i]);
    }
    
    long long int result = 0;
    if (choices == size){
        result = sumElements(array, size, 0);
    }    
    else {
        // assuming the first constraint holds true i.e. size > choices        
        // sort input array: O(N^2) time
        // can use mergesort or quicksort to get O(NlogN) time
        long long int temp;
        for (int i=0; i<size; i++){
            for (int j=i+1; j<size; j++){
                if (array[i] > array[j]){
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        
        int elements_to_discard = size - choices;        
        result = sumElements(array, size, elements_to_discard);
    }    
    
    //printf("%lld", sum);
    printf("%lld", result);
    return 0;
}