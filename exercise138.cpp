

#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main(){

    cout<<"Enter the number here : ";
    int n;
    cin>>n;

    cout<<"The "<<n<<"th fibonacci number is : "<<fib(n)<<endl;


    return 0;
}
