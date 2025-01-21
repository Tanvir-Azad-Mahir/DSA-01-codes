#include<iostream>
using namespace std;

class Queue{

int front,rear;
int arr[100];


public:
Queue(){
    front =-1;
    rear=-1;
}
 bool isempty(){
    if(front==-1 || front >rear){
        return true;
    }
    else{
        return false;
    }
}
bool isfull(){
    if(rear==99){
        return true;
    }
    else{
        return false;
    }
}
void enqueue(int data){

if(isfull()){
    cout<<"queue is full"<<endl;
}

if(isempty()){
    cout<<"queue is empty"<<endl;
    front =0;
}
rear++;
arr[rear]=data;
}
int dequeue(){
if(isempty()){
    cout<<"queue is empty"<<endl;
}

int temp =arr[front];
front++;
if(front>rear){
    front =-1;
    rear=-1;
}
return temp;
}
int peek(){
    cout<<arr[front];
}
void display(){
    for(int i=front;i<=rear;i++){
        cout<<arr[i]<<endl;
    }
}
};

class stackusingqueue{
Queue q1,q2;
public :

void push(int data){
   while(!q1.isempty()){
    int x=q1.dequeue();
    q2.enqueue(x);
   }
   q1.enqueue(data);

   while(!q2.isempty()){
    int x=q2.dequeue();
    q1.enqueue(x);
   }
   
}
int pop(){
    return q1.dequeue();
}
void display(){
    q1.display();
}



};







int main(){
 
   stackusingqueue s1;
   s1.push(10);
   s1.push(20);
   s1.push(30);

   s1.pop();
   s1.display();

}


