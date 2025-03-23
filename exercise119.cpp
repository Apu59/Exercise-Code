//Bubble Sort

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> bubbleSort(vector<int> &arr, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}

void display(vector<int> &arr, int n){
    for(int val : arr){
        cout<<val<<" ";
    }
}


int main(){

    vector<int> vec = {9,8,7,6,5,4,3,2,1};
    int n = vec.size();

    cout<<"Before sort : ";
    display(vec,n);

    cout<<endl;

    cout<<"After sort : ";
    bubbleSort(vec,n);
    display(vec,n);

    return 0;
}