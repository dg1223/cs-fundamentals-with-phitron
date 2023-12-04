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

bool throw_exception_if_null(Node *node){
    if (node == NULL){
        cout << endl << "Invalid index" << endl << endl;
        return true;
    }
    return false;
}

// append value
void insert_at_tail(Node *&head, int value){
    Node *new_node = new Node(value);

    if (head == NULL){
        head = new_node;
        return;
    }   
    
    Node *last_node = head;
    while (last_node->next != NULL){
        last_node = last_node->next;        
    }

    // we have reached the tail
    last_node->next = new_node;
}

void print_linked_list(Node *head){
    cout << endl;
    cout << "Your linked list: ";

    Node *current = head;

    while (current != NULL){
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl << endl;;
}

int main(){
    int value;
    Node *head = NULL;
    while (true){
        cin >> value;
        if (value == -1){
            break;
        }

        insert_at_tail(head, value);
    }
    print_linked_list(head);

    return 0;
}