//Find second largest element without sorting the array.

#include<iostream>
#include<climits>
using namespace std;

int findSecondLargest(int arr[],int n){

    if(n < 2) return -1;

    int largest = INT_MIN , secondLargest = INT_MIN;

   for(int i = 0; i < n; i++){
    if(arr[i] > largest){
        secondLargest = largest;
        largest = arr[i];
    }else if(arr[i] > secondLargest && arr[i] != largest){
        secondLargest = arr[i];
    }
  }
   return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main(){

   int arr[] = {4,3,2,5,7,9};
   int n = sizeof(arr)/sizeof(int);

   int result = findSecondLargest(arr,n);

   if(result == -1){
    cout<<"There is not second largest element in the array."<<endl;
   }else{
    cout<<"The second largest element is "<<result<<endl;
   }

    return 0;
}