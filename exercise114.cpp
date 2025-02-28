#include<iostream>
using namespace std;


int main (){

    int arr[] = {4,5,6,7,8,1,2};
    int n = sizeof(arr)/sizeof(int);

    int s = 0;
    int e = n-1;

    while(s <= n){
        int mid = s+(e-s)/2;

        if((mid == 0 || arr[mid] < arr[mid-1]) && (mid == n-1 || arr[mid] < arr[mid+1])){
            cout<<"The smallest element is : "<<arr[mid]<<endl;
            return 0;
        }else if(arr[s] < arr[mid]){
            s = mid + 1;
        }else{
            e = mid -1;
        }
    }


    return 0;
}