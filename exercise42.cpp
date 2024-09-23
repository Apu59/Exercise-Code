//Program to sum of all number from 1 to n which are divisible by 3.

#include<bits/stdc++.h>
using namespace std;

int main (){

        int n,sum = 0;
        cout<<"Enter the limit here : ";
        cin>>n;

        for(int i = 1; i <= n; i++){
            if(i % 3 == 0){
                cout<<i<<" ";
                cout<<endl;
                sum = sum + i;
            }
        }
        cout<<"Sum of these number is : "<<sum<<endl;




    return 0;
}