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

// first come first serve
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