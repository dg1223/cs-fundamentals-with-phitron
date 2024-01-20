#include <iostream>
#include <vector>

using namespace std;

int main(){
    int nodes, edges;
    cin >> nodes >> edges;
    vector<pair<int, int>> v;
    
    while (edges--){
        int a, b;
        cin >> a >> b;
        // v.push_back(make_pair(a, b));
        v.push_back({a, b});
    }

    // print edge list: option 1
    for (int i=0; i < v.size(); i++){
        // cout << v[i] << " "; // produces error because you can't directly print pair
        cout << v[i].first << " " << v[i].second << endl;
    }

    // print edge list: option 2
    for (pair<int, int> p : v){
        cout << p.first << " " << p.second << endl;
    }

    // print edge list: option 3
    for (auto p : v){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}

/*
input
6 6
0 1
1 5
0 4
0 3
3 4
2 4
*/


