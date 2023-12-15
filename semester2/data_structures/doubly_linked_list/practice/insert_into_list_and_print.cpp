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

int size(Node *head) {
    Node *current = head;
    int count = 0;
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
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
    // edge case where list has only 1 node or even number of nodes
    swap(i->value, j->value);
}

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
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--){        
        int index, value;
        cin >> index >> value;

        int list_size = size(head);
                
        if (index == 0){
            insert_head(head, tail, value);
        }
        else if (index == list_size) {
            insert_tail(head, tail, value);
        }
        else if (index > list_size) {
            cout << "Invalid" << endl;
            continue;
        }
        else {
            insert_at_position(head, index, value);
        }

        print_normal(head);
        print_reverse(tail);
    }


    return 0;
}