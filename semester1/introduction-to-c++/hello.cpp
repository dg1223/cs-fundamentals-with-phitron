#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << "The number is "<< a << endl;
    int ascii = 'c';
    cout << "ASCII value is c is " << ascii << endl;
    cout << int('c') << endl;
    double b = 10.5421326554;
    cout << fixed << setprecision(3)<< b << endl;
    return 0;
}