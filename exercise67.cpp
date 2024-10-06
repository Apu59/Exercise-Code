// Check is the number is prime or not.

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main (){

        int n;
        cout<<"Enter the value here : ";
        cin>>n;

        if(isPrime(n) == true){
            cout<<"The number is prime.";
        } else{
            cout<<"The number is not prime.";
        }

    return 0;
}