#include<iostream>
#include<algorithm>
using namespace std;

int findSingleElem(int arr[], int n){
    if(n == 1) return arr[0];

    sort(arr, arr+n);

    if(arr[0] != arr[1]) return arr[0];

    if(arr[n-1] != arr[n-2]) return arr[n-1];

    for(int i = 1; i < n-1 ; i++){
        if(arr[i] != arr[i-1] && arr[i] != arr[i+1]) return arr[i];
    }
    return -1;
}

int main(){

    int arr[] = {2,2,1};
    int n = sizeof(arr)/sizeof(int);

    int arr2[] = {4,1,2,1,2};
    int n2 = sizeof(arr2)/sizeof(int);

    cout<<"Single element : "<<findSingleElem(arr,n)<<endl;
    cout<<"Single element : "<<findSingleElem(arr2,n2)<<endl;

    return 0;
}