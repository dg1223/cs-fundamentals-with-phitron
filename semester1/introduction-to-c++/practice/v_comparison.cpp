#include <iostream>

using namespace std;

int main(){
    int a, b;
    char s;
    cin >> a >> s >> b;
    if ((a > b && s == '>') || (a < b && s == '<') || (a == b && s == '=')){
        cout << "Right";
    }
    else {
        cout << "Wrong";
    }
    return 0;
}