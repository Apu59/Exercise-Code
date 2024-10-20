//Liner Search 

#include<bits/stdc++.h>
using namespace std;

int linerSearch(int arr[], int size, int terget){
    for(int i = 0; i < size; i++){
        if(arr[i] == terget){
            return i;  //Element found
        }
    }
    return -1; //Element not found
}

int main (){

        int arr[] = {2,3,5,7,8,6,4};
        int size = sizeof(arr) / sizeof(int);
        int terget = 40;

        int result = linerSearch(arr, size, terget);
        cout<<result<<endl;




    return 0;
}