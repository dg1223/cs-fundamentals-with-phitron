/*
W. Mirror Array

Given two numbers N, M and a 2D array of size N * M

. Print the inverted array that appeared in the mirror.
Input

First line contains two numbers N
, M (1 ≤ N,M ≤ 100) N donates number of rows and M

donates number of columns.

Each of the next N
lines will contain M numbers (1 ≤ A_i,j ≤ 10^9)
Output

Print the inverted array.

2 3 5
7 9 20
35 1 12

>>
5 3 2 
20 9 7 
12 1 35 
*/

#include <stdio.h>
int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &array[i][j]);
        }
    }
    
    // invert
    int first_col_index, last_col_index, temp;
    
    for (int i=0; i<row; i++){        
        first_col_index = 0;
        last_col_index = col - 1;
        for (int j=0; j<col; j++){
            //printf("i = %d, j = %d\n", i, j);            
            //printf("first_col_index = %d, last_col_index = %d\n", first_col_index, last_col_index);
            if (first_col_index > last_col_index){
                //printf("loop broken\n");
                break;
            }
            //printf("array[i][first_col_index] = %d, array[i][last_col_index] = %d\n", array[i][first_col_index], array[i][last_col_index]);
            temp = array[i][first_col_index];
            array[i][first_col_index] = array[i][last_col_index];
            array[i][last_col_index] = temp;
            //printf("swapped: array[i][first_col_index] = %d, array[i][last_col_index] = %d\n", array[i][first_col_index], array[i][last_col_index]);
            first_col_index++;
            last_col_index--;
        }
    }
    
    // print inverted array
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}