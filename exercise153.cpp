//Math for DSA

//Prime Number Logic

#include<iostream>
using namespace std;

string isPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return "Non Prime";
    }
    return "prime";
}

int main(){

    int x = 47;
    string result = isPrime(x);
    cout<<result<<endl;

    return 0;
}