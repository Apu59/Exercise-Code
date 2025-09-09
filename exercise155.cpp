//Digits in a number 
//Calculate sum of digits of the number
//Calculate number of digits of the number 
#include<iostream>
using namespace std;

int printDigints(int n){
    // int count = 0;
    int sum = 0;
    while(n != 0){
        int digit = n % 10;
        // cout<<digit<<endl;
        // count++;
        sum += digit;
        n = n / 10;
    }
    // return count;
    return sum;
}

int main(){

    int n = 59059;
    cout<<printDigints(n);

    return 0;
}