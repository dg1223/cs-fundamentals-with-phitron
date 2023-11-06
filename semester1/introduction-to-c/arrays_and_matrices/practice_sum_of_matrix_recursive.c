/*
N. Sum of a Matrix

Given two matrices A and B of size R * C. Print the summation of A and B.

Note: Solve this problem using recursion.

Input
First line contains two numbers R and C (1 ≤ R, C ≤ 100). number of rows and number of columns respectively.

Next R lines will contain C numbers ( - 100 ≤ Ai, j ≤ 100) matrix A numbers.

Next R lines will contain C numbers ( - 100 ≤ Bi, j ≤ 100) matrix B numbers.

Output
Print the summation result.

2 3
1 2 3
4 5 6
1 3 5
7 9 11

>>
2 5 8
11 14 17
*/

#include <stdio.h>

// too many parameters; not elegant
void sumOfMatrix(int row, int col, int array1[][col], int array2[][col], int result[][col], int i, int j){
    int sum;
    if (i < row){
        if (j < col){
            sum = array1[i][j] + array2[i][j];
            result[i][j] = sum;
            sumOfMatrix(row, col, array1, array2, result, i, j+1);
        }
        else {
            sumOfMatrix(row, col, array1, array2, result, i+1, 0);
        }
    }
    
}

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    // array 1
    int array1[row][col];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    // array 2
    int array2[row][col];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &array2[i][j]);
        }
    }
    
    int result[row][col];
    
    sumOfMatrix(row, col, array1, array2, result, 0, 0);
    
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}