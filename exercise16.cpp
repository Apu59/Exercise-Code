//Program to convert  a string into a lowercase string.


#include <bits/stdc++.h>
using namespace std;


int main (){
        
        char string[20];

        cout<<"Enter a string here to convert into lower case : ";
        cin.getline(string, 20);

        cout<<"The lower case string is : "<<strlwr(string)<<endl;


    return 0;
}