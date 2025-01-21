#include<iostream>
using namespace std;

struct node{
int data;
node *next;
};
node *head =NULL;

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
insertlast(30);
insertlast(40);
node *temp =head;
while(temp!=NULL){

    cout<<temp->data<<" ";
    
    temp=temp->next;
}

}