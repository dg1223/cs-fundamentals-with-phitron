#include <stdio.h>
int main(){
    int x = 10;
    //printf("%p\n", &x);
    int *p = &x;
    printf("%p\n", p);
    
    // dereferene -> shows value of x
    printf("%d\n", *p);
    
    // change value of x by reference
    *p = 500;
    printf("%d\n", x);
    return 0;
}