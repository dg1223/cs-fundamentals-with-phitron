#include <stdio.h>
#include <string.h>

int main(){
    int testcases;    
    int size = 10001;
    char str[size];
    scanf("%d", &testcases);
    // int uppercase[testcases], lowercase[testcases], digit[testcases];
    for (int t=0; t<testcases; t++){
        int uppercase = 0, lowercase = 0, digits = 0;
        scanf("%s", str);
        for (int i=0; i<strlen(str); i++){
            char currentString = str[i];
            // uppercase
            if (currentString >= 65 && currentString <= 90){
                uppercase++;
                // uppercase[t]++;
            }
            // lowercase
            else if (currentString >= 97 && currentString <= 122) {
                lowercase++;
                // lowercase[t]++;
            }
            // digits
            else if (currentString >= 48 && currentString <= 57) {
                digits++;
                // digit[t]++;
            }
        }

        printf("%d %d %d\n", uppercase, lowercase, digits);
    }

    // print outputs
    // for (int i=0; i<testcases; i++){
    //     printf("%d %d %d\n", uppercase[i], lowercase[i], digit[i]);
    // }
    return 0;
}