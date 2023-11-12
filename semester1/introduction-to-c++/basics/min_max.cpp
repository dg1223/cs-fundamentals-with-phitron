#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a = 10, b = 20, c = 30, d = 40;
    int x = min(a, b);
    int y = max(a, b);
    int z = min({a, b, c, d});
    cout << x << endl << y << endl << z << endl;
    return 0;
}