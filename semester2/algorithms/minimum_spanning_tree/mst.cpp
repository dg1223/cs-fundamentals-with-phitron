#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int n = 1e5+5;
int parent[n];
int group_size[n];

void dsu_initialize(int n){
    // if node values start from 1, then for(int i=1...)
    for (int i=0; i<n; i++){
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if (parent[node] == -1){
        return node;
    }

    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2) {
    int leader_a = dsu_find(node1);
    int leader_b = dsu_find(node2);
    
    if (group_size[leader_a] > group_size[leader_b]){
        parent[leader_b] = leader_a;
        group_size[leader_a] += group_size[leader_b];
    }
    else {
        parent[leader_a] = leader_b;
        group_size[leader_b] += group_size[leader_a];
    }
}

class Edge {
    public:
        int u, v, w;
        Edge(int u, int v, int w){
            this->u = u;
            this->v = v;
            this->w = w;
        }
};

bool cmp(Edge a, Edge b){
    return a.w < b.w;
}

int main(){
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edge_list;
    while (e--){
        int u, v, w;
        cin >> u >> v >> w;
        edge_list.push_back(Edge(u, v, w));
    }

    sort(edge_list.begin(), edge_list.end(), cmp);

    int total_cost = 0;
    for(Edge edge : edge_list){
        int leader_u = dsu_find(edge.u);
        int leader_v = dsu_find(edge.v);

        // aleady in the same group i.e. already connected
        if (leader_u == leader_v){
            continue;
        }
        // not the same group, need to connect
        else {
            dsu_union_by_size(edge.u, edge.v);
            total_cost += edge.w;
        }
    }

    cout << total_cost << endl;
    
    return 0;
}

/*
5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5
*/