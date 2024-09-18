//Simple Interest.

#include<bits/stdc++.h>
using namespace std;

int main (){

    float A,r,P,t,simpleInterest;
    

    cout<<"Enter your principal balance : ";
    cin>>P;

    cout<<"Enter your time(in year) : ";
    cin>>t;

    cout<<"Enter the interest rate(in percentage) : ";
    cin>>r;

    simpleInterest = ((P*r*t)/100);
    A = simpleInterest + P;


    cout<<"The simple interest is : "<<simpleInterest<<endl;
    cout<<"Your final balance is : "<<A<<endl;


    return 0;
}