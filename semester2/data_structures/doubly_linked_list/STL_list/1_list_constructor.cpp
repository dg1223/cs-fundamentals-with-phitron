#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main(){
    // // regular initialization
    // list<int> my_list;
    // list<int> my_list(10, 5);
    // list<int> my_list2(my_list);

    // // initialize from array
    // int a[5] = {10, 20 ,30 ,40 ,50};
    // list<int> my_list(a, a+5);

    // initialize from vector
    vector<int> v = {100, 200, 300};
    list<int> my_list(v.begin(), v.end());

    // // use regular for loop if you need the pointer
    // for (auto it=my_list.begin(); it!=my_list.end(); it++){
    //     cout << *it << endl;
    // }

    // use range for loop for everything else
    for(int val : my_list) {
        cout << val << endl;
    }
    return 0;
}