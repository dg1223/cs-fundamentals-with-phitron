#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i=1; i<=n; i++){
        for (int j=k; j>0; j--){
            printf("*");
        }
        k--;
        // after first line is printed        
        printf("\n");
    }
    return 0;
}