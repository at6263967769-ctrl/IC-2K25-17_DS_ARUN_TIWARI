//circular linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* last = NULL;

// Insert in Empty List
void insertEmpty(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = newNode;
    last = newNode;
}

// Insert at Beginning
void insertBeg(int data) {
    if (last == NULL) {
        insertEmpty(data);
        return;
    }

    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
}

// Insert at End
void insertEnd(int data) {
    if (last == NULL) {
        insertEmpty(data);
        return;
    }

    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
}

// Insert After a Given Value
void insertAfter(int data, int item) {
    if (last == NULL)
        return;

    Node* temp = last->next;

    do {
        if (temp->data == item) {
            Node* newNode = new Node();
            newNode->data = data;
            newNode->next = temp->next;
            temp->next = newNode;

            if (temp == last)
                last = newNode;

            return;
        }

        temp = temp->next;
    } while (temp != last->next);

    cout << "Node not found" << endl;
}

// Delete a Node
void deleteNode(int key) {
    if (last == NULL)
        return;

    Node* curr = last->next;
    Node* prev = last;

    do {
        if (curr->data == key) {
            if (curr == last && curr->next == last) {
                delete curr;
                last = NULL;
                return;
            }

            prev->next = curr->next;

            if (curr == last)
                last = prev;

            delete curr;
            return;
        }

        prev = curr;
        curr = curr->next;
    } while (curr != last->next);

    cout << "Node not found" << endl;
}

// Display List
void display() {
    if (last == NULL) {
        cout << "List is empty";
        return;
    }

    Node* temp = last->next;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != last->next);

    cout << endl;
}

int main() {
    insertEmpty(6);
    insertEnd(8);
    insertBeg(2);
    insertAfter(10, 2);

    cout << "After Insertion: ";
    display();

    deleteNode(8);

    cout << "After Deletion: ";
    display();

    return 0;
}
output:
After Insertion: 2 10 6 8
After Deletion: 2 10 6
