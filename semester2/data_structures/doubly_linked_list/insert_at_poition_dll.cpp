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

// valid for any position except tail
void insert_at_position(Node *head, int position, int value) {
    Node *new_node = new Node(value);
    Node *current = head;
    for (int i=1; i<=position-1; i++){
        current = current->next;
        }
    new_node->next = current->next; // 100 -> 30
    current->next = new_node; // 20 -> 100
    new_node->next->prev = new_node; // 100 <- 30
    new_node->prev = current; // 20 <- 100
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // update connections
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    insert_at_position(head, 2, 100);

    print_normal(head);
    print_reverse(tail);

    return 0;
}