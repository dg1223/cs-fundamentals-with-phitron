#include <stdio.h>

int main(){
    int testcases;
    scanf("%d", &testcases);
    double x, result;
    int a, b, c;
    long long int multiplicand;
    for (int i=0; i<testcases; i++){
        scanf("%lf %d %d %d", &result, &a, &b, &c);
        x = result / (a * b * c);
        // typecast x to check if result is a fraction
        if (x != (long long int)x){
            multiplicand = -1;
        }
        else {
            multiplicand = (long long int)x;
        }
        printf("%lld\n", multiplicand);
    }
    return 0;
}