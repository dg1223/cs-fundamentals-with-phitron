#include <stdio.h>
#include <string.h>

int main(){
    int size = 100001;
    int consonants = 0;
    char str[size];
    scanf("%s", str);
    for (int i=0; i<strlen(str); i++){
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u'){
            consonants++;
        }
    }
    printf("%d", consonants);
    return 0;
}