//Array In DSA

#include<bits/stdc++.h>
using namespace std;

int main (){

    int marks[] = {10, 20, 30, 40, 50, 60}; //Array 
    int size = sizeof(marks) / sizeof(int); //Size of an array
    for(int i = 0; i < size; i++){  //Print array element by for loop
        cout<<marks[i]<<endl;
    }

    cout<<endl;
    cout<<endl;
    cout<<endl;

    //Process how to take element inside an array from user input
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int size2 = n;
    int marks2[size2];
    for(int i = 0; i < size2; i++){
        cin>> marks2[i];
    }

    cout<<endl;

    for(int i = 0; i < size2; i++){ //Print the array which i take from user
        cout<<marks2[i]<<" ";
    }












    return 0;
}