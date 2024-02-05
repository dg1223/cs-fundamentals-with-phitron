#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int n = 1e5 + 5; // variable size doesn't work with vectors

vector<int> v[n];
bool visited[n];

void dfs(int source){
    cout << source << endl;
    visited[source] = true;
    
    for (int child : v[source]){
        if (!visited[child]){
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
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    // the for loop takes care of disconnected components
    for (int i=0; i<n; i++){
        if (!visited[i]){
            dfs(i);
        }
    }

    return 0;
}

/*
6 6
0 1
0 2
0 3
1 4
3 5
3 2
*/

/*
graph with cycle and disconnected components
7 6
0 1
1 2
3 4
4 5
5 6
6 3
*/