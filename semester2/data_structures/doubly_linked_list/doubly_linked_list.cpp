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

void print_reverse(Node *tail) {
    Node *current = tail;
    while (current != NULL){
        cout << current->value << " ";
        current = current->prev;
    }
    cout << endl;
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;

    // update connections
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;

    print_normal(head);
    print_reverse(tail);

    return 0;
}