#include<iostream>
using namespace std;


struct node{
    int data;
    node *next;

};
node *head =NULL;

void insertfirst(int value){

node *newnode=new node();

newnode->data=value;
newnode->next=head;
head=newnode;

}

int main(){

int value;
char choice;

cout<<"after first input,If you want to add element press Y/y ,if don't press any expect Y/y"<<endl;
do{

cin>>value;
insertfirst(value);
cout<<"enter your choice :";
cin>>choice;

}
while(choice=='y'||choice =='Y');

node *run=head;
cout<<"Your output is :";
while(run!=NULL){
    cout<<run->data<<" ";
    run=run->next;
}
return 0;
}