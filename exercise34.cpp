//Program to find if the person is eligible for driving licence or not.

#include<bits/stdc++.h>
using namespace std;

int main(){

        int age;

        cout<<"Enter your age here : ";
        cin>>age;

        if(age >= 18)
        {
            cout<<"You are eligible for driving licence. "<<endl;
        }
        else 
        {
           cout<<"You will eligible for driving after "<<(18-age)<<" year "<<endl;
        }


    return 0;
}