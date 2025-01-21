#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};
node *head =NULL;



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
void deletefirst(){

if(head==NULL)
{
    return;
}
node* current =head;
head=current->next;
delete current;

}

void deletlast(){

    if(head==NULL){
        return;
    }
node* current =head;
node* previous=NULL;
while(current->next!=NULL){
previous =current;
current =current->next;
}

if(previous!=NULL){
    previous->next=NULL;
}
    else{
        head=NULL;
    }
    delete current;

    }

    void deletany(int target){
if(head ==NULL){

    return;
}

node* current =head;
node* previous=NULL;

while(current->data!=target){
      previous=current;
      current =current->next;

}
if(previous!=NULL){
    previous->next=current->next;
    
}
else {head=NULL;}

delete current;
    }


int main(){



insertlast(10);
insertlast(20);
insertbegin(30);
insertbegin(40);

//deletlast();
deletany(20);


node *temp =head;
while(temp!=NULL){

    cout<<temp->data<<" ";
    
    temp=temp->next;
}

}