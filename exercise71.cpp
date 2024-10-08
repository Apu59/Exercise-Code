//Binary to decimal converter.

#include<bits/stdc++.h>
using namespace std;

int binToDec(int binNum){
    int ans = 0, pow = 1;
    while(binNum > 0){
        int rem = binNum % 10;
        binNum = binNum / 10;
        ans = ans + (rem * pow);
        pow = pow * 2;
    }
    return ans;
}

int main(){

        int binNum;
        cout<<"Enter the binary number here : ";
        cin>>binNum;

        int result = binToDec(binNum);
        cout<<"The decimal form of "<<binNum<<" is : "<<result<<endl;

    return 0;
}