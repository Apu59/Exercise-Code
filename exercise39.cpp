//Program to check is the number prime or not.

#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;
    bool isPrime = true;

    cout<<"enter the number : ";
    cin>>n;

    for(int i = 2; i <= (n-1); i++){
        if(n % i == 0){
            isPrime = false;
            break;
        } 
    }
    if(isPrime == true){
        cout<<"Your number is prime "<<endl;
    } else {
        cout<<"Your number is non-prime "<<endl;
    }

    return 0;
}