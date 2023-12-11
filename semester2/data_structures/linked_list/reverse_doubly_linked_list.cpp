#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node *next;
        Node *prev;

    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_normal(Node *head) {
    Node *current = head;
    while (current != NULL){
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

// two pointers
void reverse(Node *head, Node *tail) {
    Node *i = head;
    Node *j = tail;
    // account for both odd and even number of nodes
    while (i != j && i->next != j){
        swap(i->value, j->value);
        i = i->next;
        j = j->prev;
    }
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *tail = d;

    // update connections
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = d;
    d->prev = c;

    reverse(head, tail);
    print_normal(head);

    return 0;
}