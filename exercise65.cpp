// Calculate sum of all numbers of a number.

#include<bits/stdc++.h>
using namespace std;

int main (){

        int num;
        cout<<"Eter the number here : ";
        cin>>num;

        int digitSum = 0;
        while(num > 0){
            int lastDigit = num%10;
            num = num/10;
            digitSum = digitSum + lastDigit;
        }
        cout<<"The result is : "<<digitSum<<endl;
    return 0;
}
