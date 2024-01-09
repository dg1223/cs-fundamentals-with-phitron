#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    vector<int> v;
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);

        // insert x into min heap
        int cur_idx = v.size() - 1;    

        // logN time
        while (cur_idx != 0){
            int parent_idx = (cur_idx-1)/2;
            if (v[parent_idx] > v[cur_idx]){
                swap(v[parent_idx], v[cur_idx]);
            }
            else {
                break;
            }
            cur_idx = parent_idx;    
        }
    }


    for(int val: v){
        cout << val << " ";
    }

    cout << endl;

    return 0;
}