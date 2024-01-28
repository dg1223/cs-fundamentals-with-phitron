#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

// adj list
vector<int> v[1005];
// visited list
bool visited[1005];

void dfs(int source){
    queue<int> q;
    q.push(source);
    visited[source] = true;

    while (!q.empty()){
        int parent = q.front();
        q.pop();        
        cout << parent << endl;

        for (int child : v[parent]){
            cout << "child: " << child << endl;
            if (!visited[child]){
                q.push(child);
                visited[child] = true;
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

    cout << endl;
    
    dfs(source);

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
7 6
0 1
0 2
1 3
2 6
3 4
3 5
0
*/