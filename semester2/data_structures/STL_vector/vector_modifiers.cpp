#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> x = {10, 20, 30, 40};
    vector<int> v = {1, 2, 3};
    v = x; // O(N)
    return 0;
}