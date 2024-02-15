#include <iostream>

using namespace std;

const int n = 1e5+5;
int par[n];
// for heuristic 1: union by size
int group_size[n];
// for heuristic 2: union by rank (level)
int level[n];

void dsu_initialize(int n) {
    for (int i=0; i<n; i++){
        par[i] = -1;
        // union by size
        group_size[i] = 1;
        // union by rank
        level[i] = 0;
    }
}

int dsu_find(int node){
    if (par[node] == -1){
        return node;
    }
    // // naive implementation: O(N)
    // return find(par[node]);

    /**
     * Optimized: path compression 
     * every node's parent is now its leader
     * */
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
    
    // // shortcut
    // return par[node] = find(par[node]);
}

void dsu_union(int node1, int node2){
    int leader_a = dsu_find(node1);
    int leader_b = dsu_find(node2);

    // elect a new leader of the combined group based on a heuristic
    // naive heuristic
    par[leader_a] = leader_b;
}

void dsu_union_by_size(int node1, int node2){
    int leader_a = dsu_find(node1);
    int leader_b = dsu_find(node2);

    /**
     * elect a new leader of the combined group based on a heuristic
     * heuristic 1: union by size
     * heuristic 2: union by rank (level)
     * */ 

    // union by size
    if (group_size[leader_a] > group_size[leader_b]){
        par[leader_b] = leader_a;
        group_size[leader_a] += group_size[leader_b];
    }
    else {
        par[leader_a] = leader_b;
        group_size[leader_b] += group_size[leader_a];
    }
}

void dsu_union_by_rank(int node1, int node2){
    int leader_a = dsu_find(node1);
    int leader_b = dsu_find(node2);

    /**
     * elect a new leader of the combined group based on a heuristic
     * heuristic 1: union by size
     * heuristic 2: union by rank (level)
     * */ 

    // union by rank
    if (level[leader_a] > level[leader_b]){
        par[leader_b] = leader_a;
    }
    else if (level[leader_b] > level[leader_a]){
        par[leader_a] = leader_b;
    }
    else {
        par[leader_a] = leader_b;
        level[leader_b]++;
    }
}

int main(){
    dsu_initialize(7);
    // dsu_union_by_size(1, 2);
    // dsu_union_by_size(2, 3);
    // dsu_union_by_size(4, 5);
    // dsu_union_by_size(5, 6);
    // // connect both groups
    // dsu_union_by_size(1, 4);
    
    dsu_union_by_rank(1, 2);
    dsu_union_by_rank(2, 3);
    dsu_union_by_rank(4, 5);
    dsu_union_by_rank(5, 6);
    // connect both groups
    dsu_union_by_rank(1, 4);

    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;
    return 0;
}