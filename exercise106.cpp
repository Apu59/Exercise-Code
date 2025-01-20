//Selection Aort

#include<iostream>
#include<vector>
using namespace std;

vector<int> ascendingOrderSort(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        int smallestIndex = i; //We are assuming first element of the unsorted array is the smallest element and we will compare with other element of the array with this.
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j; //now j is the smallest element 
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
    return arr;
}

vector<int> descendingOrderSort(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        int smallestIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] > arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i],arr[smallestIndex]);
    }
    return arr;
}

vector<int> printArray(vector<int>& arr){
    for(int num : arr){
        cout<<num<<" ";
    }
}


int main (){

    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();

    cout<<"Unsorted arry : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Ascending order sort : ";
    vector<int> ascSort = ascendingOrderSort(arr,n);
    printArray(ascSort);

    cout<<endl;

    cout<<"Descending order sort : ";
    vector<int> desSort = descendingOrderSort(arr,n);
    printArray(desSort);


    return 0;
}