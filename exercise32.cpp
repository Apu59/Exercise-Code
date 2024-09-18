// Program to calculate Max of 2 numbers.

#include<bits/stdc++.h>
using namespace std;

    int findMax(int num1, int num2)
    {
         if(num1 > num2)
        {
            return num1;
        }
        else 
        {
            return num2;
        }
    }

int main(){

        int x , y;

        cout<<"Enter your first number : ";
        cin>>x;
        cout<<"Enter your second number : ";
        cin>>y;

        int maxNumber = findMax(x , y);

        cout<<"The max number is : "<<maxNumber<<endl;
       

    return 0;
}