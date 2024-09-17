// Program is number prime or not.

#include<bits/stdc++.h>
using namespace std;


int main (){

    int n, i = 2;

    cout<<"Enter the number here : ";
    cin>>n;

    while(i <=(n-1))
    {
        if(n%i == 0)
        {
            cout<<"The number is not Prime. "<<endl;
            break;
        }
        else 
        {
            i++;
        }
        cout<<"The number is Prime. "<<endl;
        break;
    }

    return 0;
}