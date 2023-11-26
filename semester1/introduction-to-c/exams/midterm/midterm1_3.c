#include <stdio.h>
#include <string.h>

int main(){
    int testCases, original, additional, daysTaken;
    scanf("%d", &testCases);
    int fewerDaysRequired[testCases];
    for (int i=0; i<testCases; i++){
        scanf("%d %d %d", &original, &additional, &daysTaken);
        fewerDaysRequired[i] = daysTaken - ( (daysTaken*original) / (original+additional) );        
    }

    // generate output
    for (int i=0; i<testCases; i++){
        printf("%d\n", fewerDaysRequired[i]);
    }
    
    return 0;
}