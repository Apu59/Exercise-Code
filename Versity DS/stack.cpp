//Stack for University lab exam.

#include<iostream>
using namespace std;

int myStack[5];
int size = sizeof(myStack)/sizeof(int);
int top = -1;

void display(){
    if(top == -1){
        cout<<"The stack is empty. "<<endl;
    }else{
        cout<<"The stack elements are: "<<endl;
        for(int i = 0; i <= top; i++){
            cout<<myStack[i]<<endl;
        }
    }
}
bool isFull(){
    if(top == size-1){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
void push(int x){
    if(isFull()){
        cout<<"The stack is overflow. "<<endl;
    }else{
        top++;
        myStack[top] = x;
        cout<<x<<" is pushed in the stack. "<<endl;
    }
}
void pop(){
    if(isEmpty()){
        cout<<"The stack is underflow. "<<endl;
    }else{
        cout<<myStack[top]<<" is popped from the stack. "<<endl;
        top--;
    }
}
void peek(){
    if(isEmpty()){
        cout<<"As the stack is empty, there is no top element. "<<endl;
    }else{
        cout<<"The top element is : "<<myStack[top]<<endl;
    }
}

int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    peek();
    pop();
    pop();
    pop();
    pop();
    pop();
    peek();
    display();


    return 0;
}