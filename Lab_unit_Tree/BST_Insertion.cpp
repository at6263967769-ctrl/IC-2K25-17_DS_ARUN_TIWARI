/BST_Insertion
BST ek binary tree hai 
jisme smaller value left
side aur greater value right 
side insert hoti hai
. Isse searching aur insertion 
easy ho jati hai.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int val) {

    if (root == NULL) {
        Node* temp = new Node;
        temp->data = val;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    }
    else if (val > root->data) {
        root->right = insert(root->right, val);
    }

    return root;
}

void inorder(Node* root) {

    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    Node* root = NULL;
    int n, val;

    cout << "Enter nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "BST: ";
    inorder(root);

    return 0;
}
input:
Enter nodes: 5
50 30 70 20 40
output:
BST: 20 30 40 50 70
