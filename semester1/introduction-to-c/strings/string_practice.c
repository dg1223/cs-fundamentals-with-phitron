#include <stdio.h>
#include <string.h>

int main(){
    char S[1001], T[1001];
    scanf("%s", S);
    scanf("%s", T);
    // fgets(S, 1000, stdin);
    // fgets(T, 1000, stdin);

    // length
    int len_S = strlen(S);
    int len_T = strlen(T);
    printf("%d %d\n%s %s", len_S, len_T, S, T);
    
    return 0;
}