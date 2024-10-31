//Pair Sum problem brute force aproach in array.

#include<iostream>
#include<vector>
using namespace std;

int pairSum(int arr[], int size,int target){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i]+arr[j] == target){
                cout<<"Index are :";
                cout<<i<<","<<j<<endl;
                cout<<"Elements are :";
                cout<<arr[i]<<","<<arr[j];
            }
        }
    }
}

int main (){

        int arr[] = {2,7,11,15};
        int size = sizeof(arr) / sizeof(int);
        int target = 26;
        pairSum(arr,size,target);


    return 0;
}
