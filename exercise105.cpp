//Bubble Sort

#include<iostream>
#include<vector>
using namespace std;

//Ascending order bubble sort
vector<int> ascendingOrderSort(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}

//Descending order bubble sort
vector<int> descendingOrderSort(vector<int>& arr, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}


int main(){

    vector<int> arr = {3,6,7,2,4,9,5,8};
    int n = arr.size();

    cout<<"Unsorted array : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Ascending order sorted array : ";
    vector<int> ascSort = ascendingOrderSort(arr,n);
    for(int num : ascSort){
        cout<<num<<" ";
    }

    cout<<endl;

    cout<<"Descending order sorted array : ";
    vector<int> desSort = descendingOrderSort(arr,n);
    for(int num : desSort){
        cout<<num<<" ";
    }



    return 0;
}