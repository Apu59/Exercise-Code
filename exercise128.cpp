//Find the first and last possition of an element in a sorted array.

#include<iostream>
using namespace std;

int firstPosition(int arr[], int n, int t){
    int s = 0, e = n-1, res = -1;
    while(s <= e){
        int m = s+(e-s)/2;

        if(arr[m] < t){
            s = m + 1;
        }else if(arr[m] > t){
            e = m - 1;
        }else{
            res = m;
            e = m -1;
        }
    }
     return res;
}


int lastPosition(int arr[], int n, int t){
    int s = 0, e = n-1, res = -1;
    while(s <= e){
        int m = s+(e-s)/2;

        if(arr[m] < t){
            s = m + 1;
        }else if(arr[m] > t){
            e = m - 1;
        }else{
            res = m;
            s = m + 1;
        }
    }
     return res;
}



int main(){

    int arr[] = {2,4,4,4,6,7};
    int n = sizeof(arr)/sizeof(int);
    int target = 4;

    int fPosition = firstPosition(arr,n,target);
    int lPosition = lastPosition(arr,n,target);

    if(fPosition != -1 && lPosition != -1){
        cout<<"First position of the element is "<<fPosition<<" and last position is "<<lPosition<<endl;
    }else{
        cout<<"Element does not have first and last posotion. "<<endl;
    }

    return 0;
}