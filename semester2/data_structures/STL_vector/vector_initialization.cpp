#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> v;
    // vector<int> v(5);
    // vector<int> v1(5, 3);
    // vector<int> v2(v1);

    // int a[6] = {1, 2, 3, 4, 5, 6};
    // vector<int> v2(a, a+6);
    vector<int> v2 = {2, 3, 4};
    for (int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << v2.size() << endl;

    return 0;
}