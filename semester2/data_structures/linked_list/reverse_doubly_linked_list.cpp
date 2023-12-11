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

bool detect_cycle(Node *head) {
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL){
        // start the race first, then check
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow){
            return true;
        }
    }
    return false;
}

int main(){
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // update connections
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = b;

    bool CYCLE_DETECTED = detect_cycle(head);
    if (CYCLE_DETECTED){
        cout << "Cycle detected" << endl;
    }
    else {
        cout << "No cycle detected" << endl;
    }

    return 0;
}