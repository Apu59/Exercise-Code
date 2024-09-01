// Program to find the last digit and first digit of a number. 

#include<bits/stdc++.h>
using namespace std;


int main (){

        int num, first_digit, last_digit;

        cout<<"Enter number here : ";
        cin>>num;

        last_digit = num % 10;

        first_digit = num;
        while(first_digit >= 10)
        {
            first_digit = first_digit / 10;
        }

        cout<<"The first digit of the number is : "<<first_digit<<endl;
        cout<<"The lasr digit of the number is : "<<last_digit<<endl; 


    return 0;
}