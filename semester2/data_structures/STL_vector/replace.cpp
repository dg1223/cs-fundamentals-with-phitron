#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v = {1, 2, 2, 3, 3, 2, 2, 4, 5, 2};
    replace(v.begin(), v.end()-1, 2, 100);
    
    for (int x:v){
        cout << x << " ";
    }
    return 0;
}