//Program to find maximum subarray sum by nested for loop.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findMaxSubarraySum(int arr[], int size){
        int maxSum = INT_MIN;
        for(int st = 0; st < size; st++){
            int currentSum = 0;
            for(int end = st; end < size; end++){
                currentSum += arr[end];
                maxSum = max(currentSum,maxSum);
            }
        }
        return maxSum;
}

int main (){

        int arr[] = {1,2,3,4,5,-6};
        int size = sizeof(arr)/sizeof(int);

        int result = findMaxSubarraySum(arr,size);
        cout<<"The maximum subarray sum is : "<<result;

    return 0;
}