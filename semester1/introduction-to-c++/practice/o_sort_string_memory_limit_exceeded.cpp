#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    char s[n];
    cin >> s;

    sort(s, s+n);

    cout << s;

    return 0;
}