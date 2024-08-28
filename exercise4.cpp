//Program to check alphabets using conditional operator.

#include<bits/stdc++.h>
using namespace std;


int main (){

    char ch;
    cout<<"Enter a character : ";
    cin>>ch;

    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ?
    cout<<"Alphabet " : cout<<" Not Alphabet "<<endl;

    return 0;
}