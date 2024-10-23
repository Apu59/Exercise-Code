//Progeam to swap max and min value of an array.(Optimized program)

#include<bits/stdc++.h>
using namespace std;

void findMaxMinAndSwap(int arr[], int size){
    int maxNumber = INT_MIN;
    int minNumber = INT_MAX;
    int maxIndex = 0;
    int minIndex = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > maxNumber){
            maxNumber = arr[i];
            maxIndex = i;
        } else if(arr[i] < minNumber){
            minNumber = arr[i];
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);
}

int main (){

        int arr[] = {5,8,9,4,2,1,7,0};
        int size = sizeof(arr) / sizeof(int);

        findMaxMinAndSwap(arr,size);
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    return 0;
}