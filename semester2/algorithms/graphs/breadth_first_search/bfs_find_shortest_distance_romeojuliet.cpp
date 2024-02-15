#include <bits/stdc++.h>

using namespace std;

// adj list
vector<int> v[100005];
// distance tracker
int dist[100005];
// visited list
bool visited[100005];

void bfs(int source){
    queue<int> q;
    q.push(source);
    visited[source] = true;
    dist[source] = 0;

    while (!q.empty()){
        int parent = q.front();
        q.pop();        
        // cout << parent << endl;

        for (int child : v[parent]){
            if (!visited[child]){
                q.push(child);
                visited[child] = true;
                // child's level = parent's level + 1
                dist[child] = dist[parent] + 1;
            }
        }
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

    int source, dest, max_steps;
    cin >> source >> dest >> max_steps;
    
    memset(visited, false, sizeof(visited));
    // set default level to -1, esp. for unconnected nodes
    memset(dist, -1, sizeof(dist));

    bfs(source);

    if (dist[dest] != -1 && dist[dest] <= max_steps*2){
        cout << "YES";
    }
    else {        
        cout << "NO";
    }

    return 0;
}