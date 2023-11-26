#include <stdio.h>
int main(){
    int testcases;
    scanf("%d", &testcases);
    for (int i=0; i<testcases; i++){
        int size;
        scanf("%d", &size);
        
        int array[size];
        for (int i=0; i<size; i++){
            scanf("%d", &array[i]);
        }
        
        int target;
        scanf("%d", &target);

        // process output
        int SEEN = 0;
        for (int i=0; i<size; i++){
            if (array[i] == target){
                SEEN = 1;
            }
        }

        // generate output
        if (SEEN){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}