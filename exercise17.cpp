//Program to check the integer number is odd or even.

#include<bits/stdc++.h>
using namespace std;


int main (){

    int a;

    cout<<"Enter an integer number here : ";
    cin>>a;

    if(a % 2)
    {
        cout<<a<<" is an odd number "<<endl;
    }
    else 
    {
        cout<<a<<" is an even number "<<endl;
    }
    



    return 0;
}