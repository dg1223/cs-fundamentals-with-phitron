#include <stdio.h>
#include <string.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    for (int i=0; i<testcases; i++){
        int rounds;
        scanf("%d", &rounds);
        
        char string[rounds+1];
        scanf("%s", string);
        
        // process input
        int length = strlen(string);
        int tiger = 0, pathan = 0;
        for (int j=0; j<length; j++){
            if (string[j] == 'T'){
                tiger++;
            }
            else {
                pathan++;
            }
        }
        
        // print output
        if (tiger > pathan){
            printf("Tiger\n");
        }
        else if (pathan > tiger) {
            printf("Pathaan\n");
        }
        else {
            printf("Draw\n");
        }
    }
    return 0;
}