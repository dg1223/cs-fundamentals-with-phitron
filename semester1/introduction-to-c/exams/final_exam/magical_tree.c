#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    /*
    Using arrays, create a pseudo hashmap of input n
    and corresponding number of rows that contain stars
    Example:
    n = 1 3 5 7 9
    r = 6 7 8 9 10
    */
    int n_value = 1, rows = 6;
    int max_n = 21; // as per given constraint
    int range = (max_n/2) + 1;
    int n_array[range];
    int row_of_stars[range];
    
    for (int i=0; i<range; i++){
        n_array[i] = n_value;
        row_of_stars[i] = rows;
        n_value += 2;
        rows++;
    }
    
    
    // get number of top rows to print
    int top_rows;
    for (int i=0; i<range; i++){
        if (n_array[i] == n){
            top_rows = row_of_stars[i];
            break;
        }
    }
    
    int top_spaces = top_rows - 1;
    int top_stars = 1;
    
    int bottom_spaces = 5;
    int bottom_star_rows = 5;
    int bottom_star_cols = n;
    
    // print branches of tree
    for (int i=1; i<=top_rows; i++){
        // print top spaces
        for (int j=1; j<=top_spaces; j++){
            printf(" ");
        }
        // print top stars
        for (int j=1; j<=top_stars; j++){
            printf("*");
        }        
        // after first line is printed
        top_spaces--;
        top_stars += 2;
        printf("\n");
    }
    
    // print body of tree
    for (int i=1; i<=bottom_star_rows; i++){
        // print bottom spaces
        for (int j=1; j<=bottom_spaces; j++){
            printf(" ");
        }
        // print bottom stars
        for (int j=1; j<=bottom_star_cols; j++){
            printf("*");
        } 
        printf("\n");
    }
    
    return 0;
}