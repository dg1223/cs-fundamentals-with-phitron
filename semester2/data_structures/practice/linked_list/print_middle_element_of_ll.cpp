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

int size(Node *head) {
    Node *current = head;
    int count = 0;
    while (current != NULL){
        count++;
        current = current->next;
    }

    return count;
}

vector<int> find_middle_element(Node *head, int size) {
    int mid = size / 2;
    int count = 0;
    vector<int> mid_elem;

    if (size % 2 == 1){
        while (count <= mid){
            if (count == mid){
                mid_elem.push_back(head->value);
            }
            head = head->next;
            count++;
        }
    }
    else {
        while (count <= mid){
            if (count == mid - 1 || count == mid){
                mid_elem.push_back(head->value);
            }
            head = head->next;
            count++;
        }
    }

    return mid_elem;
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

    int size_of_ll = size(head);

    vector<int> middle_element = find_middle_element(head, size_of_ll);
    
    for(int item:middle_element) {
        cout << item << " ";
    }

    cout << endl;

    return 0;
}