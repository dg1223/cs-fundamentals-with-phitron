#include <iostream>
#include <queue>

using namespace std;

class Node {
    public:
        int value;
        Node *left;
        Node *right;

    Node(int value){
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(){
    int value;
    cin >> value;
    Node *root;
    if (value == -1){
        root == NULL;
    }
    else {
        root = new Node(value);
    }
    
    queue<Node*> q;
    if (root){
        q.push(root);
    }

    while (!q.empty()){
        Node *parent = q.front();
        q.pop();

        // do whatever task you need to perform here
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1){
            left = NULL;
        }
        else {
            left = new Node(l);
        }

        if (r == -1){
            right = NULL;
        }
        else {
            right = new Node(r);
        }

        parent->left = left;
        parent->right = right;

        // push the children if applicable
        if (parent->left){
            q.push(parent->left);
        }
        if (parent->right){
            q.push(parent->right);
        }
    }

    return root;
}

bool search(Node *root, int x){
    if (root == NULL){
        return false;
    }
    if (root->value == x){
        return true;
    }
    if (x < root->value){
        return search(root->left, x);
    }
    else {
        return search(root->right, x);
    }
}

int main(){
    Node *root = input_tree();

    if (search(root, 6)){
        cout << "Found" << endl;
    }
    else {
        cout << "Not found" << endl;
    }

    return 0;
}

// 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1