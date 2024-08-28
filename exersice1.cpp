//Program to swap two numbers'

#include <bits/stdc++.h>
using namespace std;


int main (){

        int a = 5;
        int b = 9;
        int temp;

        cout<<"Before swap "<<endl;
        cout<<" a = "<<a<<" b = "<<b<<endl;

        temp = a;
        a = b;
        b = temp;

        cout<<"After swap "<<endl;
        cout<<" a = "<<a<<" b = "<<b<<endl;



    return 0;
}