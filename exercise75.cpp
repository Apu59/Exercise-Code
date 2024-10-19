//Find the largest and samllest number's index of an array.

#include<bits/stdc++.h>
using namespace std;


int main (){

        int arr[] = {12,34,67,34,23,54};
        int size = sizeof(arr) / sizeof(int);
        int smallest = INT_MAX;
        int largest = INT_MIN;
        int smallestIndex = 0;
        int largestIndex = 0;

        for(int i = 0; i < size; i++){
            if(arr[i] < smallest){
                smallest = arr[i];
                smallestIndex = i;
            }
            if(arr[i] > largest){
                largest = arr[i];
                largestIndex = i;
            }
        }
        cout<<"The smallest number is : "<<smallest<<" and the index is : "<<smallestIndex<<endl;
        cout<<"The largest number is : "<<largest<<" and the index is : "<<largestIndex<<endl;

    return 0;
}