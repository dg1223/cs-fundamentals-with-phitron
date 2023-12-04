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
        cout << endl << "Inserted at head" << endl << endl;
        return;
    }   
    
    Node *last_node = head;
    while (last_node->next != NULL){
        last_node = last_node->next;        
    }

    // we have reached the tail
    last_node->next = new_node;
    cout << endl << "Inserted at tail" << endl << endl;
}

void insert_at_position(Node *head, int position, int value){
    Node *new_node = new Node(value);
    Node *current = head;
    // we need to insert the item before the given position
    // so, i <= position - 1
    for (int i=1; i<=position-1; i++){
        current = current->next;
    }

    new_node->next = current->next;
    current->next = new_node;
}

// Since we are changing the value at head,
// we need to pass its address to the function
void insert_at_head(Node *&head, int value){
    Node *new_node = new Node(value);
    // we need to insert the item before the given position
    // so, i <= position - 1
    new_node->next = head;
    head = new_node;
    cout << endl << "Inserted at head" << endl << endl;
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
    Node *head = NULL;
    while (true){
        cout << "1. Insert at tail " << endl;
        cout << "2. Print linked list " << endl;
        cout << "3. Insert at any position " << endl;
        cout << "4. Insert at head " << endl;
        cout << "5. Terminate " << endl;
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
            int position, value;
            cout << "Enter position: ";
            cin >> position;
            cout << "Enter value: ";
            cin >> value;
            if (position == 0){
                insert_at_head(head, value);
            }
            else {                
                insert_at_position(head, position, value);
            }
        }
        else if (option == 4) {
            int value;
            cout << "Enter value: ";
            cin >> value;
            insert_at_head(head, value);
        }
        else if (option == 5) {
            break;            
        }

    }

    return 0;
}