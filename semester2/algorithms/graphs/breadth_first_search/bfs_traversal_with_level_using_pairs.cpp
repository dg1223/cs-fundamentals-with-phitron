/*
Use this template to find the level of the 
destination node only.
*/

#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <utility>

using namespace std;

// adj list
vector<int> v[1005];
// visited list
bool visited[1005];

void bfs(int source, int destination){
    // pair<source, level>
    queue<pair<int, int>> q;
    q.push({source, 0});
    visited[source] = true;
    // account for disjoint graph
    bool found = false;

    while (!q.empty()){
        pair<int, int> p = q.front();
        q.pop();        
        int parent = p.first;
        int level = p.second;

        if (parent == destination){
            cout << level << endl;
            found = true;
        }

        for (int child : v[parent]){
            if (!visited[child]){
                q.push({child, level+1});
                visited[child] = true;
            }
        }
    }

    if (!found){
        cout << -1 << endl;
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

    bfs(source, 6);

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

/*
input
7 8
0 1
1 2
0 4
1 3
2 0
3 4
1 5
3 6
0
*/