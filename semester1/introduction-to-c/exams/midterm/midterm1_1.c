#include <stdio.h>

int main(){
    int size, arrayElement;
    int divideByTwo = 0;
    int divideByThree = 0;
    
    // take array size
    scanf("%d", &size);

    // process array inputs
    for (int i=0; i<size; i++){
        scanf("%d", &arrayElement);
        if (arrayElement % 2 == 0){
            divideByTwo++;
            continue;
        }
        else if (arrayElement % 3 == 0) {
            divideByThree++;
        }    
    }
    printf("%d %d", divideByTwo, divideByThree);

    return 0;
}