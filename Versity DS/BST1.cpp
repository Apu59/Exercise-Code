//BST program for uiversity lab.

#include<iostream>
using namespace std;

int tree[59];  //Define array with size
int n = sizeof(tree)/sizeof(int);  //Calculation of array size
int mIndex = 0;

void add(int x){
    int index = 0;
    while(1){
        if(index >= n){
            cout<<"The tree is overflow."<<endl;
        }
        if(tree[index] == 0){
            tree[index] = x;
            break;
        }else if(tree[index] < x){
            index = (index+1)*2;  //Right child 
        }else{
            index = (index+1)*2-1; //Left child
        }
    }
    if(mIndex < index){  //Will print upto maximum index
        mIndex = index;
    }
}

int BST(int x){
    int index = 0;
    while(index <= mIndex){
        if(tree[index] == x){
            return index;
        }else if(tree[index] < x){
            index = (index+1)*2;
        }else{
            index = (index+1)*2-1;
        }
    }
    return -1;
}

void display(){
    cout<<"The tree elements are : "<<endl;
    for(int i = 0; i <= mIndex; i++){
        cout<<tree[i]<<"  ";
    }
    cout<<endl;
}

int main(){

    cout<<" 1. Display elements."<<endl;
    cout<<" 2. Add elements."<<endl;
    cout<<" 3. BST."<<endl;
    cout<<" 0. Exit program."<<endl;

    while(1){
    int c,x,s,res;

    cout<<"Enter your choice : ";
    cin>>c;

    switch(c){

        case 1:
        display();
        break;

        case 2:
        cout<<"Enter the element you want to add in the tree: ";
        cin>>x;
        add(x);
        break;

        case 3:
        cout<<"Enter the element you want to search in the tree: ";
        cin>>s;
        res = BST(s);
        if(res == -1){
            cout<<"The element is not found in the tree,"<<endl;
        }else{
            cout<<"The element is found at index : "<<res<<endl;
        }
        break;

        case 0:
        exit(0);
        break;


    }
}


    return 0;
}