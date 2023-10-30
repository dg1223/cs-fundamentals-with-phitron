#include <stdio.h>

//int sum(int x, int y){
//    int sum = x + y;
//    return sum;
//}
int sum(int x, int y);

int main(){
    int result = sum(10, 20);
    printf("%d\n", result);
    printf("%d\n", sum(30, 40));
    return 0;
}

int sum(int x, int y){
    int sum = x + y;
    return sum;
}