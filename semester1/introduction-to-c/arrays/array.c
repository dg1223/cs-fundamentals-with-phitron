#include<stdio.h>
int main(){
    int array[10] = {'0'};
    for (int i=0; i<10; i++){
        printf("%zu", sizeof(array[i]));
    printf("\n");
    }
}