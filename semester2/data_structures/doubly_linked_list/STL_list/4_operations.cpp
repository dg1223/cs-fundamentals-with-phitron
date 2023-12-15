#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    list<int> my_list = {10, 20, 30};

    // remove all 10s
    my_list.remove(10);

    // ascending sort
    my_list.sort();

    // descending sort
    my_list.sort(greater<int>());

    // remove duplicates -> O(N) if sorted in any order
    // cannot remove all duplicates if not sorted
    my_list.unique();

    // reverse linked list
    my_list.reverse();

    // use range for loop for everything else
    for(int val : my_list) {
        cout << val << endl;
    }
    return 0;
}