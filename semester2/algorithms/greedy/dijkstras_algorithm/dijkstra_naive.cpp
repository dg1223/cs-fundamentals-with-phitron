#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <climits>

using namespace std;

const int n = 100;
vector<pair<int, int>> v[n];
int dist[n];

void dijkstra(int source){
    queue<pair<int, int>> q;
    q.push({source, 0});
    dist[source] = 0;

    while (!q.empty()){
        pair<int, int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;

        for(pair<int, int> child : v[node]){
            int child_node = child.first;
            int child_cost = child.second;

            int path_cost = cost + child_cost;
            if (path_cost < dist[child_node]){
                // path relaxation
                dist[child_node] = path_cost;
                q.push({child_node, dist[child_node]});
            }
        }        
    }
}

int main(){
    int n, e;
    cin >> n >> e;

    while (e--){
        int a, b, c;
        cin >> a >> b >> c;

        v[a].push_back({b, c});
        v[b].push_back({a, c});
        
    }

    // // memset doesn't work with INT_MAX
    // memset(dist, INT_MAX, sizeof(dist));

    for (int i=0; i<n; i++){
        dist[i] = INT_MAX;
    }

    dijkstra(0);

    for (int i=0; i<n; i++){
        cout << i << " -> " << dist[i] << endl;
    }

    return 0;
}


/*
input
5 8
0 1 10
0 2 7
0 3 4
1 4 3
2 4 5
2 1 1
3 4 5
3 2 1
*/