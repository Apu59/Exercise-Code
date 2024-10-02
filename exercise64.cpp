//Get sum of number n using function. 

#include<bits/stdc++.h>
using namespace std;

int factN(int n){
        int fact = 1;
        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
        return fact;
}

int main(){

        int n;
        cout<<"Enter the value of n here : ";
        cin>>n;

        int result = factN(n);
        cout<<result<<endl;

    return 0;
}