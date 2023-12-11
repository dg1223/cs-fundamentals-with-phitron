#include <iostream>

using namespace std;

void fun(int *p1){
    *p1 = 20;
}

void fun2(int *p2){
    // NULL pointer
    // Unless p is dereferenced as *p and its value is reset
    // it will not change the value at pointer *ptr
    p2 = NULL;
}

// parameter p now points to the address of pointer p
void fun3(int *&p3){
    // here, we are setting the address of p to NULL,
    // which essentially deletes p (i.e. ptr3) from memory
    p3 = NULL;
}

void fun4(int *p4){
    cout << &p4 << endl;
}

void fun5(int *&p5){
    cout << &p5 << endl;
}

int main(){
    // int val = 10;
    // int *ptr = &val;
    // // ptr passed as address
    // fun(ptr);

    // cout << val << endl;
    // cout << *ptr << endl;
    // cout << "---" << endl;

    // int val2 = 10;
    // // ptr2 passed as address
    // int *ptr2 = &val2;
    // fun2(ptr2);

    // cout << val2 << endl;
    // cout << *ptr2 << endl;
    // cout << "---" << endl;

    // int val3 = 10;
    // // ptr2 passed as address
    // int *ptr3 = &val3;
    // fun3(ptr3);

    // cout << val3 << endl;
    // cout << *ptr3 << endl;

    int val4 = 10;
    // ptr4 received as a pointer
    int *ptr4 = &val4;
    fun4(ptr4);

    cout << &ptr4 << endl;
    cout << "---" << endl;

    int val5 = 10;
    // ptr5 received as its own address instead as a pointer
    int *ptr5 = &val5;
    fun5(ptr5);

    cout << &ptr5 << endl;


    return 0;
}