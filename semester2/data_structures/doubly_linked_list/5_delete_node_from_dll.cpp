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

// valid for any position except head and tail
// O(N) time
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

// O(1) time
void insert_head(Node *&head, Node *&tail, int value) {
    Node *new_node = new Node(value);
    if (head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

// O(1) time
void insert_tail(Node *&head, Node *&tail, int value) {
    Node *new_node = new Node(value);
    if (tail == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = tail->next;
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

    int position, value;
    cin >> position >> value;
    // insert_tail(head, tail, value);
    // delete_at_position(head, position);
    // delete_tail(tail);
    delete_head(head);

    // if (position == 0){
    //     insert_head(head, tail, value);
    // }
    // if (position == size(head)){
    //     insert_tail(head, tail, value);
    // }
    // else if (position > size(head)) {
    //     cout << "Invalid" << endl;
    // }
    // else {        
    //     insert_at_position(head, position, value);
    // }


    print_normal(head);
    print_reverse(tail);

    return 0;
}