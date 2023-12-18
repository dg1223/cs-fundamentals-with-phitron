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

class myQueue {
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int size = 0;

    void push(int val) {
        size++;
        Node *new_node = new Node(val);
        if (head == NULL){
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = tail->next;
    }

    void pop() {
        size--; 
        Node *node_to_delete = head;
        head = head->next;
        if (head == NULL){            
            tail = NULL;
            delete node_to_delete;            
            return;
        }
        head->prev = NULL;
        delete node_to_delete;
    }

    int front() {
        return head->value;
    }

    int q_size() {
        return size;
    }

    bool empty() {
        return size == 0;
    }

};

int main(){
    myQueue q;
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
    }

    while (!q.empty()){
        cout << q.front() << endl;
        q.pop();
    }

    // cout << q.front() << endl;

    // q.pop();
    // cout << q.front() << endl;

    // q.pop();
    // cout << q.front() << endl;

    // q.pop();
    // cout << q.front() << endl;

    return 0;
}