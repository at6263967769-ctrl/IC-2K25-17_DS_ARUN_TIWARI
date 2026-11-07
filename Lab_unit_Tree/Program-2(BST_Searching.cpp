//BST Searching – Recursive + Iterative
BST Searching mein hum tree
ke root node se value check karte hain.
Agar value chhoti hai toh left
aur badi hai toh right jaate hain. 
Recursive mein function
khud call hota hai, 
jabki Iterative mein while 
loop use hota hai. 
Value milne par Element Found print hota hai.
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

// Recursive Searching
Node* searchRecursive(Node* root, int key) {

    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return searchRecursive(root->left, key);
    }

    return searchRecursive(root->right, key);
}

// Iterative Searching
Node* searchIterative(Node* root, int key) {

    Node* current = root;

    while (current != NULL) {

        if (current->data == key) {
            return current;
        }
        else if (key < current->data) {
            current = current->left;
        }
        else {
            current = current->right;
        }
    }

    return NULL;
}

int main() {

    Node* root = NULL;
    int n, val, key, choice;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Enter value to search: ";
    cin >> key;

    cout << "\n1. Recursive Search";
    cout << "\n2. Iterative Search";
    cout << "\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {

        if (searchRecursive(root, key) != NULL) {
            cout << "Element Found";
        }
        else {
            cout << "Element Not Found";
        }

    }
    else if (choice == 2) {

        if (searchIterative(root, key) != NULL) {
            cout << "Element Found";
        }
        else {
            cout << "Element Not Found";
        }

    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}
input:
Enter number of nodes: 5
50 30 70 20 40
Enter value to search: 40

1. Recursive Search
2. Iterative Search
Enter choice: 1
output:
Element Found
