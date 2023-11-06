/*
D. Print Digits using Recursion

Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.

3
121
39
123456

>>
1 2 1 
3 9 
1 2 3 4 5 6
*/

#include <stdio.h>
void printDigits(int number){
    if (number != 0){
        int modulus = number % 10;
        int remaining_digits = number / 10;        
        printDigits(remaining_digits);
        printf("%d ", modulus);
    }
}

int main(){
    int testcases;
    scanf("%d", &testcases);
    
    for (int i=0; i<testcases; i++){
        int number;
        scanf("%d", &number);
        // edge case
        if (number == 0){
            printf("%d\n", number);
            continue;
        }
        printDigits(number);
        printf("\n");
    }
    
    
    return 0;
}