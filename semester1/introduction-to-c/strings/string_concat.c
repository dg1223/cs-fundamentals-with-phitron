#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    scanf("%s %s", a, b);
    strcat(a, b);
    // int k = strlen(a);
    // int len_b = strlen(b);
    // for (int i=0; i<=len_b; i++){
    //     a[k] = b[i];
    //     k++;
    // }
    printf("concatenated string = %s\n", a);
    return 0;
}