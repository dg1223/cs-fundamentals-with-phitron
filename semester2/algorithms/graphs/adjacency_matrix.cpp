#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int nodes, edges;
    cin >> nodes >> edges;
    int mat[nodes][nodes];
    memset(mat, 0, sizeof(mat));
    
    while (edges--){
        int a, b;
        cin >> a >> b;

        // fill matrix
        mat[a][b] = 1;
        mat[b][a] = 1; // remove for directed graph
    }

    // print matrix
    for (int i=0; i<nodes; i++){
        for (int j=0; j<nodes; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
input
6 6
0 1
1 5
0 4
0 3
3 4
2 4
*/


