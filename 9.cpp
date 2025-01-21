#include <iostream>


struct ListNode {
    int val;
    ListNode* next;

    
    ListNode() {
        val = 0;
        next = NULL;
    }
};


ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
    ListNode dummy;
    ListNode* current = &dummy;

    
    while (l1 != NULL && l2 != NULL) {
        if (l1->val <= l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    // Append the remaining part of l1 or l2 if any
    if (l1 != NULL) {
        current->next = l1;
    } else {
        current->next = l2;
    }

    // Return the merged list, skipping the dummy node
    return dummy.next;
}

// Function to create a new node
ListNode* createNode(int val) {
    ListNode* newNode = new ListNode();
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != NULL) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    // Create the first sorted linked list: 10 -> 30 -> 50
    ListNode* list1 = createNode(10);
    list1->next = createNode(30);
    list1->next->next = createNode(50);

    // Create the second sorted linked list: 20 -> 40 -> 60
    ListNode* list2 = createNode(20);
    list2->next = createNode(40);
    list2->next->next = createNode(60);

    // Merge the two sorted linked lists
    ListNode* mergedList = mergeTwoLists(list1, list2);

    // Print the merged linked list
    printLinkedList(mergedList);

    return 0;
}
