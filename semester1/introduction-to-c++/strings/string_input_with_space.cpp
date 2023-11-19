#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    cin.ignore(); // or getchar()
    string s;
    getline(cin, s);
    cout << a << endl;
    cout << s << endl;
    return 0;
}