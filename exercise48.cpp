// Square pattern.

#include<bits/stdc++.h>
using namespace std;

int main (){

        int n , num = 1;

        cout<<"Enter the value of n here : ";
        cin>>n;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout<<num<<" ";
                num++;
            }
            cout<<endl;
        }

    return 0;
}