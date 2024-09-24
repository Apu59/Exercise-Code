//Square pattern for characters

#include<bits/stdc++.h>
using namespace std;


int main (){

        int n;
        cout<<"Enter the value of n here : ";
        cin>>n;

        for(int i = 0; i < n; i++){
            char ch = 'A';
            for(int j = 0; j < n; j++){
                cout<<ch<<" ";
                ch++;
            }
            cout<<endl;
        }





    return 0;
}