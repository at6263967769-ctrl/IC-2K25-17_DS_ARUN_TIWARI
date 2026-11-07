#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;

void insert(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteFirst() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL;
    }

    delete temp;
}

void deleteLast() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node *temp = head;

    if (head->next == NULL) {
        head = NULL;
        delete temp;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->prev->next = NULL;
    delete temp;
}

void deleteAtPosition(int pos) {
    if (head == NULL || pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    Node *temp = head;

    for (int i = 1; i < pos && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        head = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void display() {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    cout << "Original List: ";
    display();

    deleteFirst();
    cout << "After First Deletion: ";
    display();

    deleteLast();
    cout << "After Last Deletion: ";
    display();

    deleteAtPosition(2);
    cout << "After Position Deletion: ";
    display();

    return 0;
}
output:
Original List: 10 <-> 20 <-> 30 <-> 40 <-> 50 <-> NULL

After First Deletion: 20 <-> 30 <-> 40 <-> 50 <-> NULL

After Last Deletion: 20 <-> 30 <-> 40 <-> NULL

After Position Deletion: 20 <-> 40 <-> NULL

logic:
Doubly Linked List mein node delete 
karne ke liye pehle us node ko locate 
karte hain. Phir uske previous
aur next nodes ke pointers update
karke connection maintain karte 
hain aur node delete kar dete hain.
