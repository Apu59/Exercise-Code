//Square Pattern for numbers

#include<bits/stdc++.h>
using namespace std;

int main (){

        int n;
        cout<<"Enter the value of n here : ";
        cin>>n;

        for(int i = 0; i < n; i++){
            for(int j = 1; j <= n; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }

    return 0;
}