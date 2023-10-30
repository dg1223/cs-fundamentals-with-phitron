#include <stdio.h>
#include <string.h>

int main(){
    // receive intergers
    int a, b, counter=0, VALID=1;
    scanf("%d %d", &a, &b);
    // receive string
    int size = a+b+2;
    char s[size];
    scanf("%s", s);

    /**
     * print outputs for debugging
    for (int i=0; i<strlen(s); i++){
        printf("%c %d\n", s[i], s[i]);
    }
    */

    for (int i=0; i<strlen(s); i++) {
        if (i == a){
            // violation of rule 1
            if (s[i] != '-'){
                VALID = 0;
                break;
            }
        }
        // violation of rule 2
        else if (s[i] < '0' || s[i] > '9') {
            VALID = 0;
            break;
        }
    }

    // generate output
    if (VALID){
        printf("Yes");
    }
    else {
        printf("No");
    }
    
    return 0;
}

