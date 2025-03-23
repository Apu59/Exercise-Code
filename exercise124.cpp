// Array Problem = Given an array, move all zeros to the end while maintaining the relative order of non-zero elements
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int arr[] = {0,1,9,8,4,0,0,2,7,0,6,0,9};
    int n = sizeof(arr)/sizeof(int);
    int nonZeroIndex = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[nonZeroIndex]);
            nonZeroIndex++;
        }
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
   
    return 0;
}