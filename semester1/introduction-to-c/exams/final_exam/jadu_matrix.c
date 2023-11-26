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
    // check if it's a square matrix
    if (row != col){
        printf("NO");
        return 0;
    }
    
    int jadu = 1;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if ((i == j || i+j == row-1) && matrix[i][j] != 1){
                jadu = 0;
            }
            else if ((i != j && i+j != row-1) && matrix[i][j] != 0) {
                    jadu = 0;                             
            }
        }        
    }
    
    // print output
    if (jadu){
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}