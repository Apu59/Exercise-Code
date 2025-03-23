//Binary Search
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int src){
    int s = 0, e = n - 1;

    while(s <= e){
        int mid = s+(e-s)/2;

        if(src > arr[mid] ){
            s = mid + 1;
        }else if(src < arr[mid] ){
            e = mid - 1;
        }else{
            return mid;
        }
    }

    return -1;
}


int main(){

    int arr[] = {2,4,5,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int tar = 9;

    int res = binarySearch(arr,n,tar);

    if(res == -1){
        cout<<"Item is not found. "<<endl;
    }else{
        cout<<"Item found at index "<<res<<endl;
    }


    return 0;
}