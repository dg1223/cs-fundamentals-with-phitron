// C. Compare

#include <stdio.h>
#include <string.h>

int main(){
    char a[21], b[21];
    scanf("%s %s", a, b);
    int comparison = strcmp(a, b);
    if (comparison <= 0){
        printf("%s\n", a);
    }
    else {
        printf("%s\n", b);
    }    
    return 0;
}