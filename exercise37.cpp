//Liner Search 

#include<bits/stdc++.h>
using namespace std;

    int linerSearch(int arr[], int size, int src){
        for(int i = 0; i < size; i++){
            if(arr[i] == src){
                return i;
            }
        }
        return -1;
    }

int main(){

    int arr[] = {2,4,6,8,9,12,16,20,28,50,59};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int target;

    cout<<"Enter the element you want to find : ";
    cin>>target;

    int result = linerSearch(arr, size, target);

    if(result != -1){
        cout<<"Item found at index "<<result<<endl;
    }else{
        cout<<"Item is not found "<<endl;
    }

    return 0;
}