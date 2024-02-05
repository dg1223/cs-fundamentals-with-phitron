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

void dfs(int parent){
    visited[parent] = true;
    // cout << parent << endl;
    for(int child : adj[parent]){
        /*
        In an undirected graph, for an edge [1 -- 2], since we can go both
        ways, we don't consider it a cycle. Otherwise, we'll keep looping
        between them infinitely.
        We consider there to be a cycle when there are at least 3 vertices
        and you can do a merry-go-round around them.
        */
        if (visited[child] && parent_array[parent] != child){
            answer = true;
            // cout << parent << " " << child << " " << parent_array[parent];
        }
        if (!visited[child]){
            parent_array[child] = parent;
            dfs(child);
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
            dfs(i);
        }
    }

    // // check if parents are valid
    // for (int i=0; i<n; i++){
    //     cout << parent_array[i] << " ";
    // }

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
