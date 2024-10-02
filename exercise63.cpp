//Program to culculate sum of 1 to N wiht a function.

#include<bits/stdc++.h>
using namespace std;

    int sumN(int n){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum = sum + i;
        }
        return sum;
    }

int main(){

        int n;

        cout<<"Enter the value of n here : ";
        cin>>n;

        int result = sumN(n);
        cout<<result;

    return 0;
}