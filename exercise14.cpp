// Program to count alphabet , digits and special character is a string.

#include<bits/stdc++.h>
using namespace std;



int main (){

        string str;
        int alphabets = 0, digit = 0, spchar = 0;

        cout<<"Enter a string here : ";
        getline(cin, str);

        for (int i = 0; i < str.length(); i++)
        {
            if(isalpha(str[i]))
            {
                alphabets++;
            }
            else if (isdigit(str[i]))
            {
               digit++;
            }
            else
            {
                spchar++;
            }
            
        }
        cout<<"Total Character : "<<(alphabets+digit+spchar)<<endl;
        cout<<"Total Alphabets : "<<alphabets<<endl;
        cout<<"Total Digits : "<<digit<<endl;
        cout<<"Total Special Characters : "<<spchar<<endl;
        



    return 0;
}