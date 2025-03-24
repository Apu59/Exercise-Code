//Find second smallest element without sorting the array.

#include<iostream>
#include<climits>
using namespace std;

int findSecondSmallest(int arr[], int n){
    if(n < 2) return -1;

    int smallest = INT_MAX , secondSmallest = INT_MAX;
    for(int i = 0; i< n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }
    return (secondSmallest == INT_MAX) ? -1 : secondSmallest;
}


int main(){

    int arr[] = {5,9,2,3,6};
    int n = sizeof(arr)/sizeof(int);

    int result = findSecondSmallest(arr,n);

    if(result == -1){
        cout<<"There is not second smallest element."<<endl;
    }else{
        cout<<"The second smallest element is "<<result<<endl;
    }

    return 0;
}