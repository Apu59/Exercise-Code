//Program to calculate product of all numbers in an array.

#include<bits/stdc++.h>
using namespace std;

int productOfArray(int arr[], int size){
    int product = 1;
    for(int i = 0; i < size; i++){
        product = product * arr[i];
    }
    return product;
}

int main(){

        int arr[] = {2, 3, 4, 5, 6};
        int size = sizeof(arr) / sizeof(int);

        int result = productOfArray(arr, size);
        cout<<result<<endl;

    return 0;
}