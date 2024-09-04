//Program to find sum of first and last digit of a number.


#include<bits/stdc++.h>
using namespace std;


int main (){

        int num, fd, ld;

        cout<<"Enter a number here : ";
        cin>>num;

        ld = num % 10;

        fd = num;
        while(num >= 10)
        {
            num = num / 10;
        }
        fd = num;

        cout<<"The first digit of the number is : "<<fd<<" and the last digit of the number is "<<
        ld<<endl;

        cout<<"Sum of these two number is "<<(fd+ld)<<endl;





    return 0;
}