/*
I. Count Vowels

Given a string S. Print number of vowels in the string.

Note:

    Vowel letters: ['a', 'e', 'i', 'o', 'u'].
    Vowel letters could be capital or small.
    Solve this problem using recursion. 

Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Data Structure Lab

>>
6
*/

#include <stdio.h>
#include <string.h>

int countVowels(char string[], int length, int idx, int count){
    if (length != 0){
        if (string[idx] == 'a' || string[idx] == 'e' || string[idx] == 'i' || string[idx] == 'o' || string[idx] == 'u' || string[idx] == 'A' || string[idx] == 'E' || string[idx] == 'I' || string[idx] == 'O' || string[idx] == 'U'){
            count++;            
        }
        countVowels(string, length-1, idx+1, count);
    }
    else {
        return count;
    }
    
}

int main(){
    int size = 201;
    char string[size];
    fgets(string, size, stdin);
    int length = strlen(string);
    //printf("string = %s, length = %d\n", string, length);
    int result = countVowels(string, length, 0, 0);
    printf("%d\n", result);
    return 0;
}