//Program to find all possible subarray from an array by nested for loop.

#include<iostream>
using namespace std;

int main (){

        int arr[] = {1,2,3,4,5};
        int size = sizeof(arr)/sizeof(int);

        for(int st = 0; st < size; st++){
            for(int end = st; end < size; end++){
                for(int i = st; i <= end; i++){
                    cout<<arr[i];
                }
                cout<<" ";
            }
            cout<<endl;
        }

    return 0;
}