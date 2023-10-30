#include <stdio.h>
#include <string.h>

int main(){
    int size = 1000001;
    char S[size];
    scanf("%s", S);

    int length = strlen(S);
    int result = 0;
    for (int i=0; i<length; i++){
        int digit = S[i] - 48;
        result += digit;
    }
    printf("%d\n", result);
    return 0;
}