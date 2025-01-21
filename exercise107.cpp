//Insertion Sort

#include<iostream>
#include<vector>
using namespace std;

vector<int> ascendingOrderSort(vector<int>& arr, int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int previous = i-1;

        while(previous >= 0 && arr[previous] > current){
            arr[previous+1] = arr[previous];
            previous--;
        }
        arr[previous+1] = current;
    }
    return arr;
}


vector<int> descendingOrderSort(vector<int>& arr, int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int previous = i-1;

        while(previous >= 0 && arr[previous] < current){
            arr[previous+1] = arr[previous];
            previous--;
        }
        arr[previous+1] = current;
    }
    return arr;
}

vector<int> printArray(vector<int> arr){
    for(int num : arr){
        cout<<num<<" ";
    }
}


int main (){

    vector<int> arr = {4,1,5,2,3};
    int n = arr.size();

    cout<<"Unsorted array : ";
    printArray(arr);

    cout<<endl;

    cout<<"Ascending order sorted array : ";
    vector<int> ascSort = ascendingOrderSort(arr,n);
    printArray(arr);


    cout<<endl;

    cout<<"Descending order sorted array : ";
    vector<int> descSort = descendingOrderSort(arr,n);
    printArray(arr);


    return 0;

}