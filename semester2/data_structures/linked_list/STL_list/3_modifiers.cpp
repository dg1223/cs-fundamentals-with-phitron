#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    list<int> my_list = {10, 20, 30};
    list<int> new_list;

    // assign list
    new_list = my_list;

    my_list.push_back(100);
    my_list.pop_back();
    my_list.push_front(100);
    my_list.pop_front();

    vector<int> v = {60, 70, 80};

    // insert
    // following code will not work as linked list isn't contiguous
    // my_list.insert(my_list.begin()+2, 100);

    // use next() function for linked list to move forward
    // linked list doesn't need to shift elements after inserting 
    my_list.insert(next(my_list.begin(), 2), 100);
    my_list.insert(next(my_list.begin(), 2), {200, 300});
    my_list.insert(next(my_list.begin(), 2), new_list.begin(), new_list.end());
    my_list.insert(next(my_list.begin(), 2), v.begin(), v.end());

    // erase or delete; takes value and position
    my_list.erase(next(my_list.begin(), 2));
    // erase multiple values
    my_list.erase(next(my_list.begin(), 2), next(my_list.begin(), 5));

    replace(my_list.begin(), my_list.end() ,30, 100); // begin, end, old val, new val
    auto it = find(my_list.begin(), my_list.end() ,30);

    if (it != my_list.end()){
        cout << "Found" << endl;
    }
    else {
        cout << "Not found" << endl;
    }

    // use range for loop for everything else
    for(int val : my_list) {
        cout << val << endl;
    }
    return 0;
}