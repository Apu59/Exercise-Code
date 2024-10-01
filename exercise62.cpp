//Hollow Dimond Pattern 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cout<<"Enter the value of n here : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i-1); j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < (i-1); j++){
            cout<<" ";
        }
        if(i != 0){
        cout<<"*";
        }
        cout<<endl;
    }

    for(int i = 0; i < (n-1); i++){
        for(int j = 0; j < (i+1); j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j = 0; j < (n-2-i); j++){
            cout<<" ";
        }
        for(int j = 0; j < (n-3-i); j++){
            cout<<" ";
        }
        if(i != (n-2)){
        cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}