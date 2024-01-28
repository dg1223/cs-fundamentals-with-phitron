/*
Use this template to find the level of all nodes
*/

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

// adj list
vector<int> v[1005];
// level tracker
int level[1005];
// visited list
bool visited[1005];

void dfs(int source){
    queue<int> q;
    q.push(source);
    visited[source] = true;
    level[source] = 0;

    while (!q.empty()){
        int parent = q.front();
        q.pop();        
        // cout << parent << endl;

        for (int child : v[parent]){
            if (!visited[child]){
                q.push(child);
                visited[child] = true;
                // child's level = parent's level + 1
                level[child] = level[parent] + 1;
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

    int source;
    cin >> source;
    
    memset(visited, false, sizeof(visited));
    // set default level to -1, esp. for unconnected nodes
    memset(level, -1, sizeof(level));

    dfs(source);

    for (int i=0; i<n; i++){
        cout << i << " " << level[i] << endl;
    }

    return 0;
}

/*
input
7 12
0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
2 5
5 6
1 4
1 6
0
*/

/*
input
10 11
0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
7 8
8 9
7 9
7
*/