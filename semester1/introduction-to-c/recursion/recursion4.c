// find the length of a string
#include <stdio.h>
int fun(char arr[], int i){
    if (arr[i] == '\0'){
        return 0;
    }
    int length = fun(arr, i+1);
    return length + 1;
}

#include <stdio.h>

int main(){
    char string[6] = "hello";
    int length = fun(string, 0);
    printf("%d\n", length);
    return 0;
}