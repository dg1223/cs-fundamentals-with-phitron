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

bool is_sorted(Node *head) {
    while (head->next != NULL){
        if (head->value > head->next->value){
            return false;
        }
        else {
            head = head->next;
        }       
    }

    return true;
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

    if (is_sorted(head)){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}