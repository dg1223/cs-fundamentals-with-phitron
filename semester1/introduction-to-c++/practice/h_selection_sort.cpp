#include <iostream>
#include <utility>

using namespace std;

int main(){
    int size;
    cin >> size;
    int array[size];
    for (int i=0; i<size; i++){
        cin >> array[i];
    }

    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            if (array[i] > array[j]){
                swap(array[i], array[j]);
            }
        }
    }

    for (int i=0; i<size; i++){
        cout << array[i] << " ";
    }
    return 0;
}