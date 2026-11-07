//Doubly Linked List 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

// Insert at Beginning
void insertBeg(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

// Insert at End
void insertEnd(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        newNode->prev = NULL;
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Insert at Position
void insertPos(int data, int pos) {
    if (pos == 1) {
        insertBeg(data);
        return;
    }

    Node* temp = head;

    for (int i = 1; temp != NULL && i < pos - 1; i++)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

// Delete at Beginning
void deleteBeg() {
    if (head == NULL)
        return;

    Node* temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    delete temp;
}

// Delete at End
void deleteEnd() {
    if (head == NULL)
        return;

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    if (temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    delete temp;
}

// Delete at Position
void deletePos(int pos) {
    if (head == NULL)
        return;

    if (pos == 1) {
        deleteBeg();
        return;
    }

    Node* temp = head;

    for (int i = 1; temp != NULL && i < pos; i++)
        temp = temp->next;

    if (temp == NULL)
        return;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
}

// Display Forward
void displayForward() {
    Node* temp = head;

    cout << "Forward List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Display Reverse
void displayReverse() {
    if (head == NULL)
        return;

    Node* temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    cout << "Reverse List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertBeg(5);
    insertPos(15, 2);

    cout << "After Insertions:\n";
    displayForward();
    displayReverse();

    deleteBeg();
    deleteEnd();
    deletePos(2);

    cout << "After Deletions:\n";
    displayForward();

    return 0;
}
output:
After Insertions:
Forward List: 5 15 10 20
Reverse List: 20 10 15 5
After Deletions:
Forward List: 15
