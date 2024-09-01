// Program to find the first and last digit of a number.

#include<bits/stdc++.h>
using namespace std;


int main (){

    string num;

    cout<<"Enter the number here : ";
    cin>>num;

    char first_digit = num[0];

    char last_digit = num[num.length()-1];

    cout<<"The first digit of the number is : "<<first_digit<<endl;
    cout<<"The last digit of the number is : "<<last_digit<<endl;



    return 0;
}