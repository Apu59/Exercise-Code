//BST for university lab

#include<iostream>
using namespace std;

int tree[20];
int n = sizeof(tree)/sizeof(int);
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
            index = (index+1)*2;
        }else{
            index = (index+1)*2-1;
        }
    }
    if(mIndex < index){
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
        int c,x,s,result;

        cout<<"Enter your choice here: ";
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
            result = BST(s);
            if(result == -1){
                cout<<"The element is not found in the tree."<<endl;
            }else{
                cout<<"The element is found at index: "<<result<<endl;
            }
            break;

            case 0:
            exit(0);
            break;
        }
    }

    return 0;
}