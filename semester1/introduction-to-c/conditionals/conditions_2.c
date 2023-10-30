// Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".

// #include<stdio.h>
// int main(){
//     int A, B;
//     scanf("%d" "%d", &A, &B);
//     if (A >= B){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
//     return 0;
// }

// Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

// #include<stdio.h>
// int main(){
//     int A, B;
//     scanf("%d" "%d", &A, &B);
//     if (A % B == 0 || B % A == 0){
//         printf("Multiples\n");
//     }
//     else{
//         printf("No Multiples\n");
//     }
//     return 0;
// }

// Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

// #include<stdio.h>
// int main(){
//     char X;
//     scanf("%c", &X);
//     if (X >= 97 && X <= 122){
//         int result = X - 32;
//         printf("%c", result);
//     }
//     else if (X >= 65 && X <= 99){
//         int result = X + 32;
//         printf("%c", result);
//     }
//     return 0;
// }

// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

// #include<stdio.h>
// int main(){
//     int X, firstDigit;
//     scanf("%d", &X);
//     while (X != 0){
//         firstDigit = X % 10;
//         X /= 10;
//     }
//     if (firstDigit % 2 == 0){
//         printf("EVEN");
//     }
//     else {
//         printf("ODD");
//     }
//     return 0;
// }

// Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.

// Note:

//     Digits in ASCII '0' = 48,'1' = 49 ....etc
//     Capital letters in ASCII 'A' = 65, 'B' = 66 ....etc
//     Small letters in ASCII 'a' = 97,'b' = 98 ....etc 

// #include<stdio.h>
// int main(){
//     char X;
//     scanf("%c", &X);
//     if (X >= 48 && X <= 57){
//         printf("IS DIGIT");
//     }
//     else{
//         printf("ALPHA\n");
//         if (X >= 97 && X <= 122){
//             printf("IS SMALL");
//         }
//         else {
//             printf("IS CAPITAL");
//         }
//     }
//     return 0;
// }

// Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

#include<stdio.h>
int main(){
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    int min = A;
    int max = A;

    // find min
    if (B < min){
        min = B;
    }
    if (C < min){
        min = C;
    }

    // find max
    if (B > max){
        max = B;
    }
    if (C > max){
        max = C;
    }
    printf("%d %d", min, max);
    return 0;
}