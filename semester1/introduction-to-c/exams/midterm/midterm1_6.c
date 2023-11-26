#include <stdio.h>
#include <string.h>

int main(){
    // declare frequency array
    int alphabet_size = 26;
    int alphabet[alphabet_size];
    for (int i=0; i<alphabet_size; i++){
        alphabet[i] = 0;
    }

    // input stream
    int size = 10001;
    char s[size];
    scanf("%s", s);
    for (int i=0; i<strlen(s); i++){
        int index = s[i] - 97; 
        alphabet[index]++;
    }

    // print output
    for (int i=0; i<alphabet_size; i++){
        if (alphabet[i] == 0){
            continue;
        }
        char letter = i + 97;
        printf("%c - %d\n", letter, alphabet[i]);
    }

    return 0;
}