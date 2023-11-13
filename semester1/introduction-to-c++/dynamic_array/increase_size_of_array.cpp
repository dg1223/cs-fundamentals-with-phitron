#include <iostream>

using namespace std;

int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << " " << endl;
    }
    delete[] a;

    a = new int[5];
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    delete[] b;
    a[3] = 4;
    a[4] = 5;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " " << endl;
    }
    return 0;
}