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

void reverse(Node *&head, Node *current) {
    if (current->next == NULL){
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
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

    reverse(head, head);
    print_linked_list_recursive(head);
    cout << endl;

    return 0;
}