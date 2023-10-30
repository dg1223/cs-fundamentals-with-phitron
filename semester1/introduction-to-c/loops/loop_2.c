// Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

// #include<stdio.h>
// int main(){
//     int N;
//     scanf("%d", &N);
//     if (N <= 1 )
//     {
//         printf("-1");
//         return 0;
//     }

//     for (int i=2; i<=N; i++){
//         if (i % 2 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// Given N numbers. Count how many of these values are even, odd, positive and negative.

// #include<stdio.h>
// int main(){
//     int N, input;
//     scanf("%d", &N);
//     int even=0, odd=0, positive=0, negative=0;
//     for (int i=0; i<N; i++){
//         scanf("%d", &input);
//         // find even odd
//         if (input % 2 == 0){
//             even++;
//         }
//         else if (input % 2 != 0) {
//             odd++;
//         }
//         // find +ve, -ve
//         if (input > 0){
//             positive++;
//         }
//         else if (input < 0) {
//             negative++;
//         }
//     }
//     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
//     return 0;
// }

// Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.

// Note: The "Correct" password is the number 1999.

// #include<stdio.h>
// int main(){
//     int X, i;    
//     int correct = 1999;
//     // for (i=0; i<=100000000; i++){               
//     // }
//     while (scanf("%d", &X) != EOF) {
//         if (X == correct){
//             printf("Correct\n");
//             return 0;
//         }
//         else {
//             printf("Wrong\n");
//         }
//     } 
//     // if (i == 100000000){
//     //     printf("Iteration limit %d reached. No correct value found. Exiting...", i);
//     //     return 0;
//     // }
//     return 0;
// }

// Given a number N, and N numbers, find maximum number in these N numbers.

// #include<stdio.h>
// int main(){
//     int N, input, max;
//     scanf("%d", &N);
//     for (int i=0; i<N; i++){
//         scanf("%d", &input);
//         if (i == 0){
//             max = input;
//         }
//         else {
//             if (input > max){
//                 max = input;
//             }
//         }
//     }
//     printf("%d\n", max);
//     return 0;
// }

// Given a number N. Print the multiplication table of the number from 1 to 12

// #include<stdio.h>
// int main(){
//     int N, multiplyTo = 12;
//     scanf("%d", &N);
//     for (int i=1; i<=multiplyTo; i++){
//         int result = i * N;
//         printf("%d * %d = %d\n", N, i, result);
//     }
//     return 0;
// }

// Given a number N. Print the digits of that number from right to left separated by space.

#include<stdio.h>
int main(){
    int a, input, mod;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        // if (i > 0){
        //     printf("\n");
        // }
        scanf("%d", &input);
        do {
            mod = input % 10;
            printf("%d ", mod);
            input = input / 10;            
        }
        while (input != 0);
        printf("\n");
    }
    return 0;
}