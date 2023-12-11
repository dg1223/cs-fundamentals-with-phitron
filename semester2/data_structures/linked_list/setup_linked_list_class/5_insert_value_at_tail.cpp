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
    cout << "Your linked list" << endl;

    Node *current = head;

    while (current != NULL){
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main(){
    Node *head = NULL;
    while (true){
        cout << "1. Insert at tail " << endl;
        cout << "2. Print linked list " << endl;
        cout << "3. Terminate " << endl;
        int option;
        cin >> option;

        if (option == 1){
            cout << "Please enter a value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);        
        }
        else if (option == 2) {
            print_linked_list(head);            
        }
        else if (option == 3) {
            break;            
        }

    }

    return 0;
}