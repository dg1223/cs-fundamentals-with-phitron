#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int n = 1e5 + 5;

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

    cout << endl;

    int num_components = 0;

    // call dfs 
    for (int i=0; i<n; i++){
        if (!visited[i]){
            dfs(i);
            num_components++;
        }
    }

    cout << "number of components = " << num_components << endl;

    return 0;
}

/*
6 5
0 1
1 2
0 2
3 4
3 5
*/