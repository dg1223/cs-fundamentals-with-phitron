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

string list_has_duplicate(Node *head) {
    vector<int> seen;
    bool HAS_DUPLICATE = false;

    while (head != NULL){
        int value = head->value;
        auto it = find(seen.begin(), seen.end(), value);

        if (it != seen.end()){
            HAS_DUPLICATE = true;
            break;
        }
        else {
            seen.push_back(value);
            head = head->next;
        }
    }

    if (HAS_DUPLICATE){
        return "YES";
    }
    else {
        return "NO";
    }

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

    string duplicate = list_has_duplicate(head);
    
    cout << duplicate << endl;

    return 0;
}