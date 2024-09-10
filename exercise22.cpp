// Program to concatenate two string.

#include<bits/stdc++.h>
using namespace std;


int main (){

    char s1[50], s2[20];

    cout<<"Enter first string s1 here : ";
    cin.getline(s1, 50);

    cout<<"Enter second string s2 here : ";
    cin.getline(s2, 20);

    strcat(s1, " "); //For space between two string.
    strcat(s1, s2);

    cout<<"Concatenated string is : "<<s1 <<endl;



    return 0;
}