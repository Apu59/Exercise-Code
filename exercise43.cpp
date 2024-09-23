//Program to find factorial of n.

#include<bits/stdc++.h>
using namespace std;

int main (){

        int n ;
        long long fact = 1;
        cout<<"Enter the number here : ";
        cin>>n;

        for(int i = n; i >= 1; i--){
            fact = fact * i;
        }
        cout<<fact<<endl;

    return 0;
}