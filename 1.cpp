#include<iostream>
using namespace std;

class Stack{
    int Stack[100];
    int top = -1;

    public:
    void Push(int data){
        if(top == 99){
            cout<<"Stack is full!";
            return;
        }
        else{
            top++;
            Stack[top] = data;
        }
    }

    int pop(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
        }
        else{
            int y = Stack[top];
            top--;

            return y;
        }
    }

    int peak(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        else{
            return Stack[top];
        }
    }

    char peak2(){
        if(top == -1){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        else{
            return Stack[top];
        }
    }



    void display(){
        for(int i=top; i>= 0; i--){
            cout<<Stack[i]<<endl;
        }
    }
};

int main(){
    Stack s1;

    s1.Push(1);
    s1.Push(5);
    s1.Push(7);
    s1.pop();

    cout<<s1.peak()<<endl<<endl;


    s1.display();




    cout<<endl<<endl<<"QUE-2"<<endl<<"_______________"<<endl<<endl;

    Stack s2;
    string str = "hello";
    string str2=str;

    cout<<str<<endl;

    for(int i = 0; i<str.size(); i++){
        s2.Push(str[i]);
    }

    cout<<s2.peak2()<<endl;

    for(int i = 0; i<str.size(); i++){
        str[i] = s2.pop();

    }

    cout<<"REVERSE STRING IS "<<str<<endl;


for(int i = 0; i<str.size(); i++){
     if(str[i] == str2[i]){

    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }
}

cout<<"YES"<<endl;

}
