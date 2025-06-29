// Stings  & Character Array in C++

#include<iostream>
using namespace std;

int main(){

// char str[] = "Hello";
// cout<< str[5]<<endl;  //It will print null character because at the end of the string it have \0 which is a null character
// char str1[100];
// cout<<"Enter the char here : ";
// cin>>str1;  //It can't take any space as input 
// cout<<"Output is : "<<str1;

// cout<<endl;

char str2[100];
cout<<"Enter char here : ";
cin.getline(str2,100);  //It can take input with space 
cout<<"Output is : "<<str2;

cout<<endl;

char str3[50];
cout<<"Enter char here : ";
cin.getline(str3,50,'$'); //It will take input untill it did not get $ (Maximum 50 character)
//This is call delimiter
cout<<"Output is : "<<str3;

    return 0;
}