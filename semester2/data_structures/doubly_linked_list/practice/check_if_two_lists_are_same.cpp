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

int size(Node *head) {
    Node *current = head;
    int count = 0;
    while (current != NULL){
        count++;
        current = current->next;
    }
    return count;
}

bool lists_are_same(Node *head_1, Node *head_2){
    while (head_1 != NULL){
        if (head_1->value != head_2->value){
            return false;
        }
        head_1 = head_1->next;
        head_2 = head_2->next;
    }
    return true;
}

int main(){
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    int value;
    
    while (true){
        cin >> value;
        if (value == -1){
            break;
        }
        insert_tail(head_1, tail_1, value);
    }

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    
    while (true){
        cin >> value;
        if (value == -1){
            break;
        }
        insert_tail(head_2, tail_2, value);
    }

    if (size(head_1) != size(head_2)){
        cout << "NO" << endl;
    }
    else {
        if (lists_are_same(head_1, head_2)){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}