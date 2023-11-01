#include <stdio.h>

int main(){
    int row, col;
    // take input
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // check if it's a diagonal matrix
    int flag = 1;
    // check if square matrix
    if (row != col){
        flag = 0;
    }
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            // check if primary diagonal
            if (i == j){
                if (a[i][j] != 1){
                    flag = 0;
                }
                // we should not check the next condition
                // since values on the diagonal are not 
                // going to be zero
                continue;
            }
            if (a[i][j] != 0){
                flag = 0;
            }            
        }
    }
    if (flag == 1){
        printf("Unit matrix");
    }
    else {
        printf("Not unit matrix");
    }
    return 0;
}