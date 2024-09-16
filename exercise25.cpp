//Prgram to print a to z and z to a.

#include<bits/stdc++.h>
using namespace std;


int main (){

    char ch, rch;

    for( ch = 'a'; ch <= 'z'; ch++)
    {
        cout<<ch<<" ";
    }

    cout<<endl;

    for(rch = 'z'; rch >= 'a'; rch--)
    {
        cout<<rch<<" ";
    }

    


    return 0;
}