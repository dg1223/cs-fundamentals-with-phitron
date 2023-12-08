#include <iostream>
#include <vector>
#include <algorithm>

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

// if (pos > size) -> invalid index
void insert_at_position(Node *head, int index, int value){
    Node *new_node = new Node(value);
    Node *current = head;
    
    // we need to insert the item before the given position
    // so, i <= position - 1
    for (int i=1; i<=index-1; i++){
        current = current->next;
        if (throw_exception_if_null(current)){
            return;
        }
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

    Node *current = head;

    while (current != NULL){
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl << endl;;
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

    int q;
    cin >> q;
    
    while (q--){
        int index, val;
        cin >> index >> val;

        int size_of_ll = size(head);

        if (index > size_of_ll){
            cout << endl << "Invalid" << endl;
        }
        else {
            if (index == 0){
                insert_at_head(head, val);
            }
            else {                
                insert_at_position(head, index, val);
            }
            print_linked_list(head);
        }        

    }

    return 0;
}