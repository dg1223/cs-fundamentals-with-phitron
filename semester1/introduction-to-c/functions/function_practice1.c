/**
 * B. Print
 * Given a number N. Print all numbers from 1 to N.
 * Note: Solve this problem using function.
 * Input
 * 
 * Only one line contains a number N (1 ≤ N ≤ 103).
 * 
 * Output
 * print numbers form 1 to N separated by a single space.
*/

#include <stdio.h>

void printNum(int n){
    for (int i=1; i<=n; i++){
        if (i == n){
            printf("%d", i);
        }
        else {
            printf("%d ", i);
        }        
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printNum(n);
    return 0;
}