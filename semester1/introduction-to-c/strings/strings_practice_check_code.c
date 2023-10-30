/*
N. Check Code

Given two numbers A, B and a code S consisting of digits (0,1,2,...,9) and a symbol '-'.

Determine if the code follows the following rules or not:

    The position A + 1 in the code is the symbol '-'.
    All other characters are one of the following digits: (0,1,2,...,9).

Input

First line contains two numbers A, B (1 ≤ A, B ≤ 10).

Second line contains S (|S| = A + B + 1) and consists of '-' and digits from 0 through 9.
Output

Print "Yes" if the code S follows the above rules otherwise, print "No".
*/

#include <stdio.h>
#include <string.h>

int main(){
    // receive intergers
    int a, b;
    scanf("%d %d", &a, &b);
    // receive string
    int size = a + b + 1;
    char s[size];
    scanf("%s", s);
    
    // process input
    int stringLength = strlen(s);
    int VALID_INPUT = 0;
    /* 
    1. Input string is too small to conform to rule 1
    2. Violation of rule 1
    */
    if (stringLength <= a || s[a] != '-'){
        printf("No");
        return 0;
    }
    /**
     * Violation of string size contraint
    */
    else if ( stringLength > size){
        printf("No");
        return 0;
    }
    /**
     * Violation of input number range constraint
    */
    else if (a < 1 || a > 10 || b < 1 || b > 10) {
        printf("No");
    }
    else {        
        for (int i=0; i<stringLength; i++){
            // skip checking index [a] because we have
            // already validated it against rule 1
            if (i == a){
                continue;
            }
            else if (s[i] >= '0' && s[i] <= '9'){
                VALID_INPUT = 1;
            }
            else {
                break;
            }
        }
    }
    // generate output
    if (VALID_INPUT){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}

