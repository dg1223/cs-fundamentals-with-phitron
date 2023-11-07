/*
K. Max Number

Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

5
1 -3 5 4 -6
>>
5
*/

#include <stdio.h>
#include <limits.h>

int maxValue(int num_items, int current_number, int current_max){
    scanf("%d", &current_number);
    if (num_items != 0){
        if (current_number > current_max){
            current_max = current_number;
        }
        if (num_items == 1){
            return current_max;
        }
        else {
            maxValue(num_items-1, current_number, current_max);
        }
    }
}

int main(){
    int num_items, current_max = INT_MIN;
    scanf("%d", &num_items);
    int result = maxValue(num_items, 0, current_max);
    printf("%d", result);
    return 0;
}