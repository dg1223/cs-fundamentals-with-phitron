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

void level_order_traversal(Node *root){
    // account for empty tree
    if (root == NULL){
        cout << "Tree is empty" << endl;
        return;
    }

    queue<Node*> q;
    q.push(root);
    while (!q.empty()){
        Node *f = q.front();
        q.pop();

        // do whatever task you need to perform here
        cout << f->value << " ";

        // keep the children here if applicable
        if (f->left){
            q.push(f->left);
        }
        if (f->right){
            q.push(f->right);
        }
    }
}

// we may have to insert at root, so we need to take its reference
// worst-case time complexity
// insert 1 node: O(H), H -> height
// insert N nodes: O(NH)
void insert(Node *&root, int x) {
    if (root == NULL){
        root = new Node(x);
        return;
    }

    if (x < root->value) {
        if (root->left == NULL){
            root->left = new Node(x);
        }
        else {
            insert(root->left, x);
        }
    }
    else {
        if (root->right == NULL){
            root->right = new Node(x);
        }
        else {
            insert(root->right, x);
        }
    }
}

int main(){
    Node *root = input_tree();
    
    insert(root, 13);
    insert(root, 32);
    insert(root, 27);
    insert(root, 22);

    level_order_traversal(root);

    return 0;
}

// 20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1