// K. Sum Digits

#include <stdio.h>
#include <string.h>

int main(){
    int n, result = 0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    for (int i=0; i<n; i++){
        result += arr[i]- '0';
    }
    printf("%d\n", result);
    return 0;
}