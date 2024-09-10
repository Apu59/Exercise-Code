// Program to calculate compaund interest.

#include<bits/stdc++.h>
using namespace std;


int main (){

        double principle , time;
        float rate, compoundInterest;
        int n;

        cout<<"Enter the principle money here : ";
        cin>>principle;

        cout<<"Enter the rate here(in percentage) : ";
        cin>>rate;

        cout<<"Enter time here(in year) : ";
        cin>>time;

        cout<<"Enter the number of time interest is compounded per year : ";
        cin>>n;

        compoundInterest = principle * pow((1 + ((rate/100)/n)), (n*time));

        cout<<"The final compound interest is : "<<compoundInterest<<endl;



    return 0;
}