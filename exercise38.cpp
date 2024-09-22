//Binary Search

#include<bits/stdc++.h>
using namespace std;

    int binarySearch(int arr[],int s, int e,int src){
        while(s <= e){
            int m = (s+e)/2;
            if(arr[m] == src){
                return m;
            } else if(arr[m] < src){
                s = m + 1;
            } else{
                e = m - 1;
            }
        }
        return -1;
    }

int main (){

        int arr[] = {2,4,6,8,10,19,20,25,35,38,40,45,50,59};
        int size = sizeof(arr) / sizeof(arr[0]);
        int startIndex = 0;
        int endIndex = (size-1);
        int target;

        cout<<"Enter the element you want to find : ";
        cin>>target;

        int result = binarySearch(arr, startIndex, endIndex,target);

        if(result != -1){
            cout<<"Item is found at index "<<result<<endl;
        } else{ 
            cout<<"Item is not found "<<endl;
        }

    return 0;
}