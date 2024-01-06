#include <bits/stdc++.h>

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

// first come first serve
vector<int> reverseLevelOrder(Node *root){
    vector<int> v;

    // // account for empty tree
    // if (root == NULL){
    //     return v;
    // }

    queue<Node*> q;
    if (root){   
        q.push(root);
    }
    
    while (!q.empty()){
        Node *node = q.front();
        q.pop();
        v.push_back(node->value);

        // keep the children here if applicable
        if (node->left){
            q.push(node->left);
        }
        if (node->right){
            q.push(node->right);
        }
    }

    reverse(v.begin(), v.end());
    return v;
}

int main(){
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // connections
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;

    level_order_traversal(root);

    return 0;
}