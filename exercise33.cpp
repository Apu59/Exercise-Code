//Program to find factorial 

#include<bits/stdc++.h>
using namespace std;

    int findFact(int n)
    {
        int fact = 1;
        for(int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }

int main (){

        int n;

        cout<<"Enter your number : ";
        cin>>n;

        int Factorial = findFact(n);

        cout<<"The factorial is "<<Factorial<<endl;
        
    return 0;
}