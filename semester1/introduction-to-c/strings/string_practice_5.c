#include <stdio.h>
#include <string.h>

int main(){
    // create an alphabet array for calculation
    int alphabet_size = 26;
    int alphabet[alphabet_size];
    for (int i=0; i<alphabet_size; i++){
        alphabet[i] = 0;
    }

    // process input
    char s;
    int counter = 0;
    while (scanf("%c", &s) != EOF){
        // automatic typecasting from char to int
        int index = s - 97; 
        alphabet[index]++;
    }

    // generate output
    for (int i=0; i<alphabet_size; i++){
        if (alphabet[i] == 0){
            continue;
        }
        char letter = i + 97;
        printf("%c : %d\n", letter, alphabet[i]);
    }

    return 0;
}