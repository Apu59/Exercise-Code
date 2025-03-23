#include<iostream>
#include<climits>
using namespace std;


int main(){

    int arr[] = {3,0,5,1,8,2,9};
    int n = sizeof(arr)/sizeof(int);

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout<<min<<endl;
    cout<<max<<endl;

    return 0;

}