#include <iostream>
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
    // O(1) time
    Node *tail = NULL;
    while (true){
        cin >> value;
        if (value == -1){
            break;
        }
        insert_tail(head, tail, value);
    }

    // STOP at last node so that we don't encounter
    // error because of NULL value
    for (Node *i=head; i->next!=NULL; i=i->next){
        for (Node *j=i->next; j!=NULL; j=j->next){
            if (i->value > j->value){
                swap(i->value, j->value);
            }
        }
    }

    print_linked_list(head);

    return 0;
}