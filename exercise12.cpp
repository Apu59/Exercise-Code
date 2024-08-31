//Program to compare two strings with strcmp().


#include<bits/stdc++.h>
using namespace std;


int main (){

    char str1[50], str2[50];

    cout<<"Give first string here : ";
    cin>>str1;

    cout<<"Give second string here : ";
    cin>>str2;

    int result = strcmp(str1, str2);

    if(result == 0)
    {
        cout<<"Both strings are equal "<<endl;
    }
    else if(result < 0)
    {
        cout<<"String2 is larger than String1 "<<endl;
    }
    else
    {
        cout<<"String1 is larger than String2 "<<endl;
    }
    
    

    return 0;
}