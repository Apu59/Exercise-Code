//Binary Search

#include<bits/stdc++.h>
using namespace std;

    int binarySearch(int arr[], int s, int e, int src){
        while(s <= e){
           int m = (s+e) / 2;
           if(arr[m] == src){
            return m;
           } else if(arr[m] < src){
            s = m+1;
           } else {
            e = m-1;
           }
        }
        return -1;
    }

int main(){

        int arr[] = {2,4,5,7,9,10,18,33,45,50,59,69,72};
        int size = sizeof(arr) / sizeof(arr[0]);
        int startIndex = 0;
        int endIndex = size-1;
        int target;

        cout<<"Enter the element you want to search : ";
        cin>>target;

        int result = binarySearch(arr,startIndex,endIndex,target);

        if(result == -1){
            cout<<"Item is not found "<<endl;
        } else {
            cout<<"Item found at index "<<result<<endl;
        }

    return 0;
}