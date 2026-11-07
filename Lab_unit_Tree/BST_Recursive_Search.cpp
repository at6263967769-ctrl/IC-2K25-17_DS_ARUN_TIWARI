/BST_Recursive_Search.cpp
BST Recursive Searching mein
given value ko root se
compare karte hain. Agar value
chhoti hai toh left aur badi
hai toh right subtree mein jaate hain
. Function khud ko call karta
hai jab tak value mil na jaye 
ya NULL na ho.
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

Node* searchRecursive(Node* root, int key) {

    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return searchRecursive(root->left, key);
    }

    return searchRecursive(root->right, key);
}

int main() {

    Node* root = NULL;
    int n, val, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Enter value to search: ";
    cin >> key;

    if (searchRecursive(root, key) != NULL) {
        cout << "Element Found";
    }
    else {
        cout << "Element Not Found";
    }

    return 0;
}
input:
Enter number of nodes: 5
50 30 70 20 40
Enter value to search: 40
output:
Element Found
