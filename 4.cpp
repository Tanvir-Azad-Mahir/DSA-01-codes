#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};
node *head =NULL;

void insertany(int target,int value){
    node* newnode= new node();
    newnode-> data =value;
    node *current=head;
    while(current ->data!=target){

        current = current ->next;
    }
    newnode->next=current->next;
    current->next=newnode;
}

void insertbegin(int value){

    node *newnode=new node();
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
void insertlast(int value){

    node *newnode=new node();
    newnode->data=value;
    newnode->next=NULL;

  if(head==NULL){

    head =newnode;
    newnode=NULL;
    }
    else{
        node* current =head;
        while(current->next){
        current =current->next;
    }
    current ->next=newnode;
    }
}
int main(){



insertlast(10);
insertlast(20);
insertbegin(30);
insertbegin(40);
insertany(10,5);

node *temp =head;
while(temp!=NULL){

    cout<<temp->data<<" ";
    
    temp=temp->next;
}

}