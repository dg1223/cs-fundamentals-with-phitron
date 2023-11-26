#include <stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    
    // get matrix
    int matrix[row][col];
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }        
    }
    
    // process input
    int last_row = row - 1;
    int last_col = col - 1;
    
    // last row
    for (int i=0; i<col; i++){
        printf("%d ", matrix[last_row][i]);
    }
    printf("\n");
    // last column
    for (int i=0; i<row; i++){
        // remove trailing space
        if (i == row-1){
            printf("%d", matrix[i][last_col]);            
        }
        else {
            printf("%d ", matrix[i][last_col]);
        }        
    }
    
    return 0;
}