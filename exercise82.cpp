//Program to print intersection of 2 arrays.

#include<bits/stdc++.h>
using namespace std;

int findIntersection(int arr1[], int size1, int arr2[], int size2){
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}

int main(){

    int arr1[] = {2,5,37,9};
    int size1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {4,6,9,2,8};
    int size2 = sizeof(arr2) / sizeof(int);

    cout<<"The intersecton of these two arrays are : ";
    findIntersection(arr1,size1,arr2,size2);
    cout<<endl;

    return 0;
}