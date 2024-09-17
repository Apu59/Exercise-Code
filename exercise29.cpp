// Sum of numbers from 1 to N.

#include<bits/stdc++.h>
using namespace std;

int main (){

    int count = 1, sum = 0;
    int N;

    cout<<"Enter the limit : ";
    cin>>N;

    for(count = 1; count <= N; count++)
    {
        sum = sum + count;
    }

    cout<<"The sum is : "<<sum<<endl;

    return 0;
}