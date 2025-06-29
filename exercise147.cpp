//Strings in C++

#include<iostream>
using namespace std;

int main (){


string str1 = "Apu";
// cout<<str1;
str1 = "Sarker"; //It will resize the string and changed into Sarker because strings are dunamic. 
cout<<str1;

cout<<endl;

string str2 = "Apu";
string str3 = "Sarker";
cout<<(str2 + str3)<<endl; //String concatination.



    return 0;
}