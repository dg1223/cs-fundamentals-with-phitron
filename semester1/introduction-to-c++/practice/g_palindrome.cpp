#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int array[size];
    for (int i=0; i<size; i++){
        cin >> array[i];
    }

    int head = 0;
    int tail = size - 1;
    int PALINDROME = 1;
    while (head < tail){
        if (array[head] != array[tail]){
            PALINDROME = 0;
            break;
        }
        head++;
        tail--;        
    }

    if (PALINDROME){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}