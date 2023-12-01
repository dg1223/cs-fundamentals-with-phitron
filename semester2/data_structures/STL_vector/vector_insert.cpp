#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {1, 2, 3, 4, 5};    
    // v.insert(v.begin()+2, 10);
    vector<int> y = {100, 200, 300, 400, 500};
    v.insert(v.begin()+2, y.begin(), y.end());
    for (int x:v){
        cout << x << " ";
    }
    return 0;
}