#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int size;
    cin >> size;
    int array[size];
    for (int i=0; i<size; i++){
        cin >> array[i];
    }

    sort(array, array+size);

    for (int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    return 0;
}