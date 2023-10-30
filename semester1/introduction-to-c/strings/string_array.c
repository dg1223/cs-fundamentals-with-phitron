#include <stdio.h>
#include <string.h>
void fun(char arr[]){
// void fun(char *arr){ // same as above
    int size_in_fun = sizeof(arr) / sizeof(char);
    printf("size_in_fun = %d\n", size_in_fun);
    printf("length = %d\n", strlen(arr));
}

int main(){
    char arr[20] = "Hello";
    int size_in_main = sizeof(arr) / sizeof(char);
    printf("size_in_main = %d\n", size_in_main);
    fun(arr);
    return 0;
}