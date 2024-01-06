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

long long int leftSum(Node *root)
{
	if (root == NULL){
        return 0;
    }

    queue<Node*> q;    
    q.push(root);
    long long int sum = 0;    

    while (!q.empty()){
        Node *f = q.front();
        q.pop();

        // traverse the children
        if (f->left){
            q.push(f->left);
            sum += f->left->value;
        }
        if (f->right){
            q.push(f->right);
        }
    }

    return sum;
}

int main(){
    Node *root = input_tree();

    cout << count_leaf(root) << endl;

    return 0;
}