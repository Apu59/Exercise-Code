//Reverse an array without using any extra space.

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int sIndex, int eIndex){
    while(sIndex <= eIndex){
        swap(arr[sIndex], arr[eIndex]);
        sIndex++;
        eIndex--;
    }
}

int main (){

        int arr[] = {9,8,7,6,5,4,3,2,1};
        int size = sizeof(arr) / sizeof(int);
        int sIndex = 0;
        int eIndex = size - 1;

        reverseArray(arr,sIndex,eIndex);
        for(int i = 0; i < size; i++){
            cout<<arr[i]<<" ";
        }

    return 0;
}