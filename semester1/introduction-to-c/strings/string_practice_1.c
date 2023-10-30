#include <stdio.h>
#include <string.h>

int main(){
    int size = 1000001;
    char S[size];
    fgets(S, size, stdin);
    
    int len_S = strlen(S);
    char new_string[size];
    for (int i=0; i<len_S; i++){
        if (S[i] == '\\'){
            break;
        }
        new_string[i] = S[i];
    }
    printf("%s\n", new_string);
    return 0;
}