/BST_Iterative_Search.cpp
BST Iterative Searching 
mein given value ko
root se compare karte hain.
Smaller value ke liye left 
aur greater value ke liye right
jaate hain. Ismein while loop 
use hota hai, 
jo element milne ya NULL
hone tak search karta hai.

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
    int n, val, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Enter value to search: ";
    cin >> key;

    if (searchIterative(root, key) != NULL) {
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
Enter value to search: 100
output:
Element Not Found
