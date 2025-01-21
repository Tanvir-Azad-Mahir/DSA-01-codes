#include <iostream>
using namespace std;

// Definition of a node in the linked list
struct Node {
    int data;
    Node* next;
};

Node* head = NULL; // Global head pointer

// Function to add a node at the end of the list
void addNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to detect and remove a cycle in the linked list
void detectAndRemoveCycle() {
    if (!head || !head->next) return;

    Node* slow = head;
    Node* fast = head;

    // Detect cycle using Floyd's algorithm
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    if (slow != fast) {
        return; // No cycle
    }

    // Remove the cycle
    slow = head;
    if (slow == fast) {
        while (fast->next != slow) {
            fast = fast->next;
        }
    } else {
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    fast->next = NULL;
}

// Function to print the linked list
void printList() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(20);
    
    detectAndRemoveCycle();

    cout << "Linked List after removing cycle: ";
    printList();

    return 0;
}
