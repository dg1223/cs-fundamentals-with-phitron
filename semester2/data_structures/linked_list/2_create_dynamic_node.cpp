#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node *next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

int main(){
    // these are both inside dynamic memory (heap)
    // head, a -> stores addresses
    // *head, *a -> gives us values referenced by their respective addresses
    Node *head = new Node(10);
    Node *a = new Node(20);

    head->next = a;

    cout << head->value << endl;
    cout << a->value << endl;
    cout << head->next->value << endl;
    /*
    head is a pointer. derefereced: *head gives us the Node object head
    So, *head is an object. (*head).next = a, which is also a pointer.
    Therefore, we need to deference it again to get the Node object a.
    So, (*(*head).next) gives us Node object a. 
    Now, we can access a.value
    The short-hand notation of (*head).next is head->next
    So, the short-hand notation of (*(*head).next).value will be 
    head->next->value, which is basically a->value
    */
    
    cout << (*(*head).next).value << endl;
    
    return 0;
}