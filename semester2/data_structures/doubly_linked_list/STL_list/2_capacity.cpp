#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){
    list<int> my_list = {10, 20, 30};
    cout << my_list.max_size() << endl;
    // my_list.clear();
    my_list.resize(2); // 10, 20
    // my_list.resize(5); // 10, 20, 0, 0, 0
    my_list.resize(5, 100); // 10, 20, 100, 100, 100
    cout << my_list.size() << endl;


    // use range for loop for everything else
    for(int val : my_list) {
        cout << val << endl;
    }
    return 0;
}