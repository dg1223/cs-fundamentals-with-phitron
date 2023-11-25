#include <iostream>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    for (int i=0; i<testcases; i++){
        string ticket;
        cin >> ticket;
        int sum1 = 0, sum2 = 0;
        for (int i=0; i<ticket.size(); i++){
            if (i < 3){
                sum1 += (int)ticket[i];
            }
            else {
                sum2 += (int)ticket[i];
            }
        }

        if (sum1 == sum2){
            cout << "YES";
        }
        else {
            cout << "NO";
        }

        cout << endl;
    }
    return 0;
}