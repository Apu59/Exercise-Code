//Program to print all unique values in an array.

#include<bits/stdc++.h>
using namespace std;

int findUniqueValues(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }
}

int main(){

        int arr[] = {2,4,6,8,3,2,4,6,8,9};
        int size = sizeof(arr) / sizeof(int);

        cout<<"Unique values are : ";
        findUniqueValues(arr,size);
        cout<<endl;




    return 0;
}