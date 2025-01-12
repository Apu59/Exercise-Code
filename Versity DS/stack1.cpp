//Stack practice for university lab.

#include<iostream>
using namespace std;

int S[5];
int n = sizeof(S)/sizeof(int); 
int top = -1;

bool isEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
bool isFull(){
    if(top == (n-1)){
        return true;
    }else{
        return false;
    }
}
void push(int x){
    if(isFull()){
        cout<<"The stack is full."<<endl;
    }else{
        top++;
        S[top] = x;
        cout<<x<<" is pushed in the stack."<<endl;
    }
}
void pop(){
    if(isEmpty()){
        cout<<"The stack is already empty."<<endl;
    }else{
        cout<<S[top]<<" is removed from the stack."<<endl;
        top--;
    }
}
void peek(){
    if(isEmpty()){
        cout<<"As the stack is empty, there is no top element."<<endl;
    }else{
        cout<<"The top element is : "<<S[top]<<endl;
    }
}
void display(){
    if(isEmpty()){
        cout<<"The stack is empty."<<endl;
    }else{
        cout<<"The stack elements are : ";
        for(int i = 0; i <= top; i++){
            cout<<S[i]<<"  ";
        }
        cout<<endl;
    }
}

int main (){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    peek();
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    peek();
    display();
    
    return 0;
}