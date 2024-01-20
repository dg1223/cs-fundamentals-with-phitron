#include <iostream>
#include <vector>

using namespace std;

int main(){
    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> adlist[nodes];
    
    while (edges--){
        int a, b;
        cin >> a >> b;
        adlist[a].push_back(b);
        adlist[b].push_back(a); // remove this for directed graph        
    }

    // print adjacency list
    for (int i=0; i < adlist[1].size(); i++){
        cout << adlist[1][i] << " ";
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


