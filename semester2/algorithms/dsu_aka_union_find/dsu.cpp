#include <iostream>

using namespace std;

const int n = 1e5+5;
int par[n];

void dsu_initialize(int n) {
    for (int i=0; i<n; i++){
        par[i] = -1;
    }
    par[1] = 3;
    par[2] = 1;
}

int find(int node){
    if (par[node] == -1){
        return node;
    }
    // // naive implementation
    // return find(par[node]);

    /**
     * Optimized: path compression 
     * every node's parent is now its leader
     * */
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
    
    // // shortcut
    // return par[node] = find(par[node]);
}

int main(){
    dsu_initialize(4);
    cout << find(0) << endl;
    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(3) << endl;
    return 0;
}