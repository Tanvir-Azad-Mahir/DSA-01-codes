
#include<iostream>
using namespace std;

class Stack {
    int stack[100];
    int top = -1;

public:
    void push(int data) {
        if(top == 99) {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        stack[top] = data;
    }

    int pop() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return -1; // Indicates empty stack
        }
        int y = stack[top];
        top--;
        return y;
    }

    int peek() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return -1; // Indicates empty stack
        }
        return stack[top];
    }

    void display() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for(int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
};

int main() {
    Stack s1;  // Corrected to use the class name Stack
    s1.push(1);
    s1.push(2);
    s1.display();
}
