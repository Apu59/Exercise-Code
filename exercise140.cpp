//Bubble sort with after each pass display

#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<"After "<<i+1<<" swap : ";
        for(int k = 0; k < n; k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Before sort : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    bubbleSort(arr,n);

    cout<<"After sort : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    



    return 0;
}