
#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
    
};

Node* head = NULL; 

void insert(int value){
 Node *newnode =new Node();
  newnode->data=value;
  newnode->next=head;
  head=newnode;

}


int findMiddle() {
    if (!head) return -1;

    int count = 0;
    Node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

   
    int middleIndex = count / 2;
    temp = head;

    
    for (int i = 0; i < middleIndex; i++) {
        temp = temp->next;
    }

    return temp->data;
}


void printList() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insert(50);
    insert(40);
    insert(30);
    insert(20);
    insert(10);

    cout << "Linked List: ";
    printList();

    int middleData = findMiddle();
    if (middleData != -1) {
        cout << "Middle Node: " << middleData << endl;
    } else {
        cout << "The list is empty." << endl;
    }

    return 0;
}