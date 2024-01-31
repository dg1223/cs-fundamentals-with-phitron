#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Edge{
    public:
        // u = start, v = target, c = cost
        int u, v, c;
        Edge(int u, int v, int c){
            this->u = u;
            this->v = v;
            this->c = c;
        }
};

const int n = 1e5+5;
int dist[n];


int main(){
    int n , e;
    cin >> n >> e;
    vector<Edge> edge_list;

    while (e--){
        int u, v, c;
        cin >> u >> v >> c;
        edge_list.push_back(Edge(u, v, c));
    }

    // for(Edge ed: edge_list){
    //     cout << ed.u << " " << ed.v << " " << ed.c << endl;
    // }

    for (int i=0; i<n; i++){
        dist[i] = INT_MAX;
    }

    // distance of node 0 (source) should be initialized to 0
    dist[0] = 0;

    // run path relaxation for n-1 times
    for (int i=1; i<=n-1; i++){
        for(Edge ed: edge_list){
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;

            // path relaxation
            /*
            We need to check if distance is lesser than infinity first
            because otherwise, if we add cost c to infinity, it will 
            overflow the integer.
            */
            if (dist[u] < INT_MAX && dist[u]+c < dist[v]){
                dist[v] = dist[u] + c;
            }
        }
    }

    for (int i=0; i<n; i++){
        cout << i << " -> " << dist[i] << endl;
    }

    return 0;
}


/*
4 4
0 2 5
0 3 12
2 1 2
1 3 3
*/