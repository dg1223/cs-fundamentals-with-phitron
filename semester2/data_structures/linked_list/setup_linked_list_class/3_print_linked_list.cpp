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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout << head->value << endl;
    // cout << head->next->value << endl;
    // cout << head->next->next->value << endl;
    // cout << head->next->next->next->value << endl;

    Node *current = head;
    while (current){
        cout << current->value << endl;
        current = current->next;
    }

    return 0;
}