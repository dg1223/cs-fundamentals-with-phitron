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

void print_linked_list_recursive(Node *n) {
    if (n == NULL){
        return;
    }

    // print head to tail
    cout << n->value << " ";
    print_linked_list_recursive(n->next);
}

void print_linked_list_in_reverse(Node *n) {
    if (n == NULL){
        return;
    }

    print_linked_list_in_reverse(n->next);

    // print tail to head: in reverse
    cout << n->value << " ";
}

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

    print_linked_list_recursive(head);
    cout << endl;
    print_linked_list_in_reverse(head);

    return 0;
}