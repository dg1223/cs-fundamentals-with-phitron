#include <stdio.h>
#include <string.h>

int main(){
    char a[12];
    fgets(a, 12, stdin);
    printf("%s\n", a);
    return 0;
}