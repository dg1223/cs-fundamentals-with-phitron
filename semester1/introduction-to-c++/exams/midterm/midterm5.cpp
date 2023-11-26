// using two-pointer technique
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int testcases;    
    cin >> testcases;

    for (int t=0; t<testcases; t++){
        int size;
        cin >> size;
        int target;
        cin >> target;

        int array[size];
        for (int i=0; i<size; i++){
            cin >> array[i];
        }

        /* two pointers */

        // sort input array
        sort(array, array + size);

        bool RESULT_FOUND = false;

        for (int i=0; i<size; i++){
            int head = i + 1;
            int tail = size - 1;            
            while (head < tail){
                int sum = array[i] + array[head] + array[tail];
                if (sum == target){
                    RESULT_FOUND = true;
                    break;
                }
                else if (sum < target){
                    head++;
                }
                else if (sum > target) {
                    tail--;
                }
            }
        }

        // print output
        if (RESULT_FOUND){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}