//Binary Search Iterative Method(Optimized middle calculation)

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    while(s <= e){
        int mid = s + (e-s)/2;  //Optimizes mid calculation for avoiding overflow of int.
        if(target > arr[mid]){
            s = mid + 1;
        }else if(target < arr[mid]){
            e = mid - 1;
        }else{
            return mid;
        }
    }
        return -1;
}

int main (){

    int nums[] = {2,3,5,6,8,9,10,14,20};
    int size = sizeof(nums)/sizeof(int);
    int src = 90;

    int result = binarySearch(nums,size,src);
    cout<< result <<endl;


    return 0;
}