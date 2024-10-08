//Program to print all decimal number from 1 to n.

#include<bits/stdc++.h>
using namespace std;

    int decToBinary(int decNum){
        int ans = 0, pow = 1;
        while(decNum > 0){
            int rem = decNum % 2;
            decNum = decNum / 2;
            ans = ans + (rem * pow);
            pow = pow * 10;
        }
        return ans;
    }

int main(){

        int limit;
        cout<<"Enter the limit here : ";
        cin>>limit;

        for(int i = 1; i <= limit; i++){
            cout<<decToBinary(i)<<endl;
        }

    return 0;
}