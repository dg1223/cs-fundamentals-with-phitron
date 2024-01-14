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

Node* convert(int arr[],int l, int r){
    if (l > r){
        return NULL;
    }

    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *left_root = convert(arr, l, mid-1);
    Node *right_root = convert(arr, mid+1, r);
    root->left = left_root;
    root->right = right_root;
    return root;
}

int main(){    
    int size;
    cin >> size;
    int arr[size];
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }

    // array, size, start index, end index
    Node *root = convert(arr, 0, size-1);

    level_order_traversal(root);

    return 0;
}

// 2 5 8 12 15 18

/*
    0    1   2     3     4     5
    2    5   8    12    15    18
    l                          r
             M(8)                                                   6. 8.l = 2; 8.r = ?
    l    r                                                       5. l(ret -> 2; 2.l = X; 2.r = 5) 
    M(2)                            
r   l                            1. r(l_r) = NULL            4. l(ret -> 5; 5.l = X, 5.r = X)
        l,r                         
         M(5)                           
    r   l                            2. r(l_r) = NULL    
         r   l                           3. l(r_r) = NULL

Tree up to this point:

                    8
                  /   \
                 2
                / \
               x   5
                  / \
                 x   x
*/