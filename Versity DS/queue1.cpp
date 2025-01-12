//Queue for university lab 

#include<iostream>
using namespace std;

int Q[5];
int n = sizeof(Q)/sizeof(int);
int f = -1, r = -1;

bool isFull(){
    if(r == (n-1)){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(){
    if(f == -1 || f > r){
        return true;
    }else{
        return false;
    }
}
void enQueue(int x){
    if(isFull()){
        cout<<"The queue is full."<<endl;
    }else{
        if(f == -1) f = 0;
        r++;
        Q[r] = x;
        cout<<"The enqueue element is "<<x<<endl;
    }
}
void deQueue(){
    if(isEmpty()){
        cout<<"The queue is already empty."<<endl;
    }else{
        cout<<"The dequeue element is "<<Q[f]<<endl;
        f++;
        if(f > r){
            f = -1;
            r = -1;
        }
    }
}
void peek(){
    if(isEmpty()){
        cout<<"As the queue is empty, there is no front element."<<endl;
    }else{
        cout<<"The front element is : "<<Q[f]<<endl;
    }
}
void display(){
    if(isEmpty()){
        cout<<"The queue is empty."<<endl;
    }else{
        cout<<"The queue elements are : ";
        for(int i = f; i <= r; i++){
            cout<<Q[i]<<"  ";
        }
        cout<<endl;
    }
}

int main(){

    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    peek();
    display();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    peek();
    display();


    return 0;
}