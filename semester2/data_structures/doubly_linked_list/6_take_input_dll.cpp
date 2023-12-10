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

int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int value;
    
    while (true){
        cin >> value;
        if (value == -1){
            break;
        }
        insert_tail(head, tail, value);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}