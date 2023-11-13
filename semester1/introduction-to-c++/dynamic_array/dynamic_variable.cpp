#include <iostream>

using namespace std;

int **fun2()
{
    int *x = new int;
    *x = 100;
    return &x;
}

int *fun()
{
    int *a = new int;
    *a = 10;
    return a;
}

int main()
{
    // int x = 10;
    // int *a = new int;
    //*a = 10;

    int *a = fun();
    cout << a << " " << *a << endl;
    delete a;

    // this should throw an error
    // x's address was kept in static memory and cleared
    // after function was returned
    int **b = fun2();
    cout << b << " " << *b << " " << **b << endl;
    return 0;
}