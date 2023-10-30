#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    scanf("%s %s", a, b);
    int comparison = strcmp(a, b);
    printf("%d\n", comparison);
    return 0;
}