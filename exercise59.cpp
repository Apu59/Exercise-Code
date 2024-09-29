//Inverted triangle pattern 

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n; 
    char ch = 'A';

    cout<<"Enter the value of n here : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < (n-i); j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    
    return 0;
}