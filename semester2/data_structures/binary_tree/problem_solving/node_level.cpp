#include <iostream>
#include <queue>
#include <utility>

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

int node_level(Node *root, int value){
	queue<pair<Node *, int>> q;
    q.push({root, 1});
    while (!q.empty()){
        pair<Node*, int> pr = q.front();
        Node *node = pr.first;
        int level = pr.second;
        q.pop();

        if (node->value == value){
            return level;
        }

        if (node->left){
            q.push({node->left, level+1});
        }
        if (node->right){
            q.push({node->right, level+1});
        }
    }
}

int main(){
    Node *root = input_tree();

    cout << count_leaf(root) << endl;

    return 0;
}