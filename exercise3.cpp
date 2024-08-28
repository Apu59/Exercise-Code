//Program to reverse a string enterd by user.


#include<bits/stdc++.h>
using namespace std;


int main (){

    string str, rstr;

    cout<<"Enter a string here : ";
    getline(cin , str);

    for( int i = str.length() - 1; i >= 0; i-- )
    {
        rstr = rstr + str[i];
    }

    cout<<"The reversed string : "<<rstr<<endl;



    return 0;
}