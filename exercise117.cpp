//Liner Search

#include<iostream>
using namespace std;

int linerSearch(int arr[], int n, int src){
    for(int i = 0; i < n; i++){
        if(arr[i] == src){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[] = {2,7,9,4,6,1,3,5};
    int n = sizeof(arr)/sizeof(int);
    int tar = 5;

    int res = linerSearch(arr,n,tar);

    if(res == -1){
        cout<<"Item not found."<<endl;
    }else{
        cout<<"Item found at index "<<res<<endl;
    }



 return 0;
}