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

void print_normal(Node *head) {
    Node *current = head;
    while (current != NULL){
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

void sort(Node *head){
    for (Node *i=head; i->next!=NULL; i=i->next){
        for (Node *j=i->next; j!=NULL; j=j->next){
            if (i->value > j->value){
                swap(i->value, j->value);
            }
        }
    }
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

    sort(head);
    
    print_normal(head);

    return 0;
}