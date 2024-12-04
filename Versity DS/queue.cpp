//Queue for University Lab.

#include<iostream>
using namespace std;

int myQueue[5];
int n = sizeof(myQueue)/sizeof(int);
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
        cout<<"The queue is overflow."<<endl;
    }else{
        if(f == -1) f= 0;
        r++;
        myQueue[r] = x;
        cout<<x<<" is insert in the queue."<<endl;
    }
}
void deQueue(){
    if(isEmpty()){
        cout<<"The queue is already empty."<<endl;
    }else{
        cout<<myQueue[f]<<" is removed from the queue."<<endl;
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
        cout<<"The front item is : "<<myQueue[f]<<endl;
    }
}
void display(){
    if(isEmpty()){
        cout<<"The queue is empty."<<endl;
    }else{
        cout<<"The queue elements are : ";
        for(int i = f; i <= r; i++){
            cout<<myQueue[i]<<"  ";
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