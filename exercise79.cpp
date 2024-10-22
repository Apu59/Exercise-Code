//Program to swap the max and min number to an array.

#include<bits/stdc++.h>
using namespace std;

int maxIndex(int arr[], int size){
    int maxNumber = INT_MIN;
    int maxNumIndex = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > maxNumber){
            maxNumber = arr[i];
            maxNumIndex = i;
        }
    }
    return maxNumIndex;
}

int minIndex(int arr[], int size){
    int minNumber = INT_MAX;
    int minNumIndex = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] < minNumber){
            minNumber = arr[i];
            minNumIndex = i;
        }
    }
    return minNumIndex;
}

int main (){

        int arr[] = {4,6,8,2,4,7,9};
        int size = sizeof(arr) / sizeof(int);

        int maxIn = maxIndex(arr,size);
        int minIn = minIndex(arr,size);
        swap(arr[maxIn], arr[minIn]);
        cout<<"After swap the new array is : "<<endl;
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }

    return 0;
}