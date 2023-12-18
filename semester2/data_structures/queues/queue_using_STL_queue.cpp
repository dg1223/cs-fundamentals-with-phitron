#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;

    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    cout << q.size();

    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();        
    }

    return 0;
}