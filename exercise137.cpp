#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {5,3,1,8,4,7,9,2,6};
    cout<<"Before sort : ";
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+n);
    cout<<"After sort : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }





    return 0;
}