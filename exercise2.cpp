//Program to check whether a character is a alphabet , number or special character.

#include <bits/stdc++.h>
using namespace std;


int main (){

    char ch;
    cout<<"Enter any character here : ";
    cin>>ch;

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout<<ch<<" is an Alphabet "<<endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout<<ch<<" is a Number "<<endl;
    }
    else 
    {
        cout<<ch<<" is a special character "<<endl;
    }


    return 0;
}