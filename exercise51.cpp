// Triangle pattren with numbers

#include<bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cout<<"Enter the value of n here : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (i+1); j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }

    return 0 ;
}