// Program to find is the number is prime or not.

#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;
    bool isPrime = true;

    cout<<"Entr your number here : ";
    cin>>n;

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"The number is prime "<<endl;
    }else{
        cout<<"The number is non-prime "<<endl;
    }

    return 0;
}