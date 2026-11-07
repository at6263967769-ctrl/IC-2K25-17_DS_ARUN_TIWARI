#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at End
void insertEnd(int value) {
    Node* newNode = new Node{value, NULL};

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Delete at Beginning
void deleteBeginning() {
    if (head == NULL) {
        cout << "List Empty\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Delete at End
void deleteEnd() {
    if (head == NULL) {
        cout << "List Empty\n";
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

// Delete at Position
void deletePosition(int pos) {
    if (pos < 1 || head == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    if (pos == 1) {
        deleteBeginning();
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid Position\n";
        return;
    }

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

// Display
void display() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);

    cout << "Original List:\n";
    display();

    deleteBeginning();
    cout << "After Beginning Deletion:\n";
    display();

    deleteEnd();
    cout << "After End Deletion:\n";
    display();

    deletePosition(2);
    cout << "After Position Deletion:\n";
    display();
    
    output:
    
Original List:
10 -> 20 -> 30 -> 40 -> NULL

After Beginning Deletion:
20 -> 30 -> 40 -> NULL

After End Deletion:
20 -> 30 -> NULL

After Position Deletion:
20 -> NULL

logic:
Beginning deletion mein head update hota hai,
isliye time O(1).
End aur position deletion mein traversal lagta hai, 
isliye time O(n). Sabki space complexity O(1) hai,
kyunki extra pointers constant hain.

    

    return 0;
}
