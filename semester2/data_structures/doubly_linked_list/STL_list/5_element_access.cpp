#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    list<int> my_list = {10, 20, 30};

    // remove all 10s
    my_list.front();
    my_list.back();

    /**
     * access other indices
    */
    
    // following code ewill not work due to some internal security reasons
    // cout << next(my_list.begin(), 3) << endl;

    // you have to dereference the iterator pointer
    cout << *next(my_list.begin(), 3) << endl;

    // use range for loop for everything else
    for(int val : my_list) {
        cout << val << endl;
    }
    return 0;
}