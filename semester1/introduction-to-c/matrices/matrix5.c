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
    if (row != col){
        flag = 0;
    }
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            // check if primary diagonal
            if (i == j){
                continue;
            }
            if (a[i][j] != 0){
                flag = 0;
            }
        }
    }
    if (flag == 1){
        printf("Primary diagonal");
    }
    else {
        printf("Not diagonal");
    }
    return 0;
}