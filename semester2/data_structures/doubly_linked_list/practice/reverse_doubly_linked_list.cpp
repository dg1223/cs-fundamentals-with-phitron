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

    reverse(head, tail);
    print_normal(head);

    return 0;
}