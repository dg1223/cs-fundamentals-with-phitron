#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main(){
    int n = 5;
    int array[n];
    for (int i=0; i<n; i++){
        cin >> array[i];
    }
    for (int i=0; i<n; i++){
        cout << array[i] << endl;
    }
    
    char s[100];
    cin >> s;
    cout << s << endl;
    
    // Clear the newline characters from the buffer
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getchar();
    char t[100];
    cin.getline(t, 100);
    cout << t << endl;
    return 0;
}