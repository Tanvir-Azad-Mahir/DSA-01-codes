#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};
node *head=NULL;

void insert(int value){

node *newnode = new node();
newnode->data=value;
newnode->next=head;
head=newnode;

}
int main(){
int value;
char choice;

    cout << "Enter values to insert into the linked list. Type 'n' to stop." << endl;

    do {
        cout << "Enter value: ";
        cin >> value;
        insert(value);

        cout << "Do you want to add another node? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

node *i=head;

cout<<"inputed linklist is :";

while(i!=NULL){
    cout<<i->data<<" ";
    i=i->next;

}

}