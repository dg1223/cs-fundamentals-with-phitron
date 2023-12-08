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

// O(1) time
void insert_tail(Node *&head, Node *&tail, int value) {
    Node *new_node = new Node(value);
    if (head == NULL){
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
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

int main(){
    int value;
    Node *head = NULL;
    // O(1) time
    Node *tail = NULL;
    while (true){
        cin >> value;
        if (value == -1){
            break;
        }

        // insert_at_tail(head, value);
        insert_tail(head, tail, value);
    }

    int size_of_ll = size(head);
    
    cout << size_of_ll << endl;

    return 0;
}