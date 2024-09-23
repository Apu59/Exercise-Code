// Nested Loops.

#include<bits/stdc++.h>
using namespace std;

int main (){

        int L, S;

        cout<<"Enter how many line you want : ";
        cin>>L;

        cout<<"Enter how many stars you want in single line : ";
        cin>>S;

        for(int i = 0; i < L; i++){
            for(int j = 0; j < S; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    return 0;
}