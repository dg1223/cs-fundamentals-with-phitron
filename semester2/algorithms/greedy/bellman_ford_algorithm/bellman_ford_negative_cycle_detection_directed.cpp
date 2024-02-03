/*
Time complexity: O(V*E)
*/

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

/* Why are we passing bool &cycle, not bool cycle?
The variable cycle is local to the main() function. If it is passed by 
value to the relax_paths() function, any changes made to cycle within 
relax_paths() won't reflect outside the function. So, even if a 
negative weight cycle is detected within relax_paths(), it won't be 
reflected in the cycle variable of main().

To fix this issue, we pass cycle by reference to relax_paths() so that 
changes to it inside the function are reflected outside.
*/
void relax_paths(vector<Edge> edge_list, bool detect_cycle, bool &cycle){
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
            if (!detect_cycle){
                dist[v] = dist[u] + c;
            }
            else {                  
                cycle = true;
                break;            
            }
        }
    }
}


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
    bool cycle = false;
    for (int i=1; i<=n-1; i++){
        relax_paths(edge_list, false, cycle);
    }

    // run path relaxation once more    
    relax_paths(edge_list, true, cycle);

    if (cycle){
        cout << "Negative cycle found. No shortest distance can be calculated." << endl;
    }
    else {
        for (int i=0; i<n; i++){
            cout << i << " -> " << dist[i] << endl;
        }
    }

    return 0;
}

/*
3 3
0 1 -1
1 2 2
2 0 -3
*/

/*
4 4
1 3 -3
0 3 5
2 1 1
0 2 -2
*/