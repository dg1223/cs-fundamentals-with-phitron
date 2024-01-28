#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

const int n = 1e5+5;
bool visited[n];
vector<int> adj[n];
int parent_array[n];
bool answer;

void bfs(int source){
    queue<int> q;
    q.push(source);
    visited[source] = true;

    // use 1->2->3->1 as an example to understand
    while (!q.empty()){
        int parent = q.front();
        // cout << parent << endl;
        q.pop();

        for(int child : adj[parent]){
            // the 2nd condition prevents 2 nodes from going back and forth as a cycle
            if (visited[child] && parent_array[parent] != child){
                answer = true;
            }
            if (!visited[child]){
                visited[child] = true;
                parent_array[child] = parent;
                q.push(child);
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(parent_array, -1, sizeof(parent_array));
    answer = false;

    for (int i=0; i<n; i++){
        if (!visited[i]){
            bfs(i);
        }
    }

    if (answer){
        cout << "Cycle found";
    }
    else {
        cout << "Cycle not found";
    }

    return 0;
}

/*
input
7 6
0 1
1 2
3 4
4 5
5 6
6 3
*/

/*
2 1
0 1
*/
