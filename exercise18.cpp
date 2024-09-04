//Program to swap first and last digin of a number.

#include<bits/stdc++.h>
using namespace std;


int main (){
         
         int num;

         cout<<"Enter a number here : ";
         cin>>num;

         string num_str = to_string(num);

         swap(num_str[0], num_str[num_str.length()-1]);

         int swap_num = stoi(num_str);

         cout<<"THe swaped number is : "<<swap_num<<endl;



    return 0;
}