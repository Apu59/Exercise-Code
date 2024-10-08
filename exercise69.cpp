//Decimal to Binary converter.

#include<bits/stdc++.h>
using namespace std;

int decToBinary(int decNum){
        int ans = 0;
        int pow = 1;
        while(decNum > 0){
            int rem = decNum % 2;
            decNum = decNum / 2;
            ans = ans + (rem * pow);
            pow = pow * 10;
        }
        return ans;
}

int main(){

        int decNum;
        cout<<"Enter your decimal number here : ";
        cin>>decNum;

        int result = decToBinary(decNum);
        cout<<"The binary form of "<<decNum<<" is : "<<result<<endl;

    return 0;
}

