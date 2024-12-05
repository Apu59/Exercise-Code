// BST for university lab.

#include<iostream>
using namespace std;

int tree[30];
int maxIndex = 0;


void add(int x){
    int index = 0;
    while(1){
        if(tree[index] == 0){
            tree[index] = x;
            break;
        }else if(tree[index] < x){
            index = (index+1) * 2;
        }else{
            index = (index+1)* 2 - 1;
        }
    }
    if(maxIndex < index){
        maxIndex = index;
    }
}

void display(){
    cout<<"The tree elements are: "<<endl;
    for(int i = 0; i <= maxIndex; i++){
        cout<<tree[i]<<"  ";
    }
    cout<<endl;
}

int BST(int x){
    int index = 0;
    while(index <= maxIndex){
        if(tree[index] == x){
            return index;
        }else if(tree[index] < x){
            index = (index+1) * 2;
        }else{
            index = (index+1)* 2 - 1;
        }
    }
    return -1;
}

int main(){

   cout<< " 1. Add any number in the tree."<<endl;
   cout<< " 2. Display the tree."<<endl;
   cout<< " 3. BST."<<endl;
   cout<< " 4. Exit."<<endl;

   while(1){
   int c,x,s,res;
   cout<<"Enter your choice: ";
   cin>>c;
   
   switch(c){
    case 1:
    cout<<"Enter the element you want to add int the tree: ";
    cin>>x;
    add(x);
    break;

    case 2:
    display();
    break;

    case 3:
    cout<<"Enter the number you want to search in the tree: ";
    cin>>s;
    res = BST(s);
    if(res == -1){
        cout<<"Item is not found in the three."<<endl;
    }else{
        cout<<"Item is found at index : "<<res<<endl;
    }
    break;

    case 4:
    exit(4);
    break;

   }
 }

    return 0;
}