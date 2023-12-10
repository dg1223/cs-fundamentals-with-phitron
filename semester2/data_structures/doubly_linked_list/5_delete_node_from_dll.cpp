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

// O(N) time
void print_normal(Node *head) {
    Node *current = head;
    while (current != NULL){
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

// O(N) time
void print_reverse(Node *tail) {
    Node *current = tail;
    while (current != NULL){
        cout << current->value << " ";
        current = current->prev;
    }
    cout << endl;
}

void delete_at_position(Node *head, int position) {
    Node *current = head;
    for (int i=1; i<=position-1; i++){
        current = current->next;
    }
    Node *node_to_delete = current->next;
    current->next = current->next->next;
    current->next->prev = current;
    delete node_to_delete;
}

void delete_head(Node *&head) {
    Node *node_to_delete = head;
    head = head->next;
    delete node_to_delete;
    head->prev = NULL;
}

void delete_tail(Node *&tail) {
    Node *node_to_delete = tail;
    tail = tail->prev;
    delete node_to_delete;
    // MUST DO
    tail->next = NULL;
}

// O(N) time
int size(Node *head) {
    Node *current = head;
    int count = 0;
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

int main(){
    // Node *head = NULL;
    // Node *tail = NULL;
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

    int position;
    cin >> position;
    // insert_tail(head, tail, value);
    // delete_at_position(head, position);
    // delete_tail(tail);
    // delete_head(head);

    if (position == 0){
        delete_head(head);
    }
    else if (position == size(head)-1){
        delete_tail(tail);
    }
    else if (position >= size(head)) {
        cout << "Invalid" << endl;
    }
    else {        
        delete_at_position(head, position);
    }


    print_normal(head);
    print_reverse(tail);

    return 0;
}