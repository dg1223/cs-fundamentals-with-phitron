#include <bits/stdc++.h>

using namespace std;

// adj list
vector<int> v[1005];
// visited list
bool visited[1005];
// track parent nodes
int par[1005];

void bfs(int source){
    queue<int> q;
    q.push(source);
    visited[source] = true;
    // level[source] = 0;

    while (!q.empty()){
        int parent = q.front();
        q.pop();        
        // cout << parent << endl;

        for (int child : v[parent]){
            if (!visited[child]){
                q.push(child);
                visited[child] = true;
                par[child] = parent;
            }
        }
    }
}

void print_shortest_path(int par[], int dest){
    vector<int> path;
    while (dest != -1){
        path.push_back(dest);
        dest = par[dest];
    }
    
    reverse(path.begin(), path.end());

    for(int val : path){
        cout << val << " ";
    }
}

int main(){
    int n, e;
    cin >> n >> e;

    while (e--){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int source, dest;
    cin >> source >> dest;
    
    memset(visited, false, sizeof(visited));
    // default parent is -1 i.e. no parent
    memset(par, -1, sizeof(par));

    bfs(source);

    // print shortest path
    print_shortest_path(par, dest);

    return 0;
}

/*
input
6 7
0 1
1 2
1 3
2 4
2 5
4 5
4 3
0
5
*/