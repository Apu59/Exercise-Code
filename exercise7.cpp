//Program to find the eligibility of admission for Army course based on the criteria

#include<bits/stdc++.h>
using namespace std;


int main (){

    int candidate_age;

    cout<<"Enter your age her : ";
    cin>>candidate_age;

    if(candidate_age >= 18)
    {
        cout<<"You are eligible to admissing for Army "<<endl;
    }
    else 
    {
        cout<<"Sorry , your are not eligible for Army "<<endl;
        cout<<"You are able to try after "<<18-candidate_age<<" year "<<endl;
    }


    return 0;
}