//Find max subarray sum by using Kadane's alorithm.

#include<iostream>
#include<climits>
using namespace std;

int findMaxSubarraySum(int arr[], int size, int cs, int ms){
        for(int i = 0; i < size; i++){
            cs += arr[i];
            ms = max(cs,ms);
            if(cs < 0){
                cs = 0;
            }
        }
        return ms;
}

int main (){

        int arr[] = {3,-4,5,4,-1,7,-8};
        int size = sizeof(arr) / sizeof(int);
        int currentSum = 0;
        int maxSum = INT_MIN;

        int result = findMaxSubarraySum(arr,size,currentSum,maxSum);
        cout<<"The max subarray sum is : "<<result;

    return 0;
}