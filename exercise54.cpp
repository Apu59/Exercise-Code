//Riverse triangel of numbers 

#include<bits/stdc++.h>
using namespace std;

int main (){

        int n;
        cout<<"Enter the value for n : ";
        cin>>n; 

        for(int i = 0; i < n; i++){
            for(int j = (i+1); j > 0; j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }



    return 0;
}