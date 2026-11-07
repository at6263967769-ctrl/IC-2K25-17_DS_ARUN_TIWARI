//Singly Linked List Insertion and Deletion Operations.cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;

        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    // Insert at position
    void insertAtPosition(int value, int position) {
        if (position < 0) {
            cout << "Invalid position" << endl;
            return;
        }

        if (position == 0) {
            insertAtBeginning(value);
            return;
        }

        Node* current = head;

        for (int i = 0; i < position - 1; i++) {
            if (current == nullptr) {
                cout << "Invalid position" << endl;
                return;
            }
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = current->next;
        current->next = newNode;
    }

    // Remove from beginning
    void removeAtBeginning() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // Remove from end
    void removeAtEnd() {
        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        Node* current = head;

        while (current->next->next != nullptr) {
            current = current->next;
        }

        delete current->next;
        current->next = nullptr;
    }

    // Remove from position
    void removeAtPosition(int position) {
        if (position < 0 || head == nullptr) {
            cout << "Invalid position or empty list" << endl;
            return;
        }

        if (position == 0) {
            removeAtBeginning();
            return;
        }

        Node* current = head;

        for (int i = 0; i < position - 1; i++) {
            if (current == nullptr || current->next == nullptr) {
                cout << "Invalid position" << endl;
                return;
            }
            current = current->next;
        }

        if (current->next == nullptr) {
            cout << "Invalid position" << endl;
            return;
        }

        Node* temp = current->next;
        current->next = temp->next;
        delete temp;
    }

    // Search element
    bool search(int target) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == target) {
                return true;
            }
            current = current->next;
        }

        return false;
    }

    // Display linked list
    void display() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);

    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAtPosition(99, 2);

    list.display();

    bool m = list.search(50);

    if (m == true) {
        cout << "mil gaya" << endl;
    } else {
        cout << "nahi mila" << endl;
    }

    list.removeAtBeginning();
    list.removeAtEnd();
    list.removeAtPosition(2);

    list.display();

    return 0;
}
output:
10 -> 20 -> 99 -> 30 -> 40 -> 50 -> NULL
mil gaya
20 -> 99 -> 40 -> NULL
