//Painters Partition Problem with Binary Search.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m , int maxAllowedTime){

    if(m > n) return false;

    int painters = 1, board = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] > maxAllowedTime) return false;

        if(board + arr[i] <= maxAllowedTime){
            board += arr[i];
        }else{
            painters++;
            board = arr[i];
        }
    }

    return painters <= m;

}

int minTimeToPaint(vector<int> &arr, int n, int m){

     if(n == 0 || m == 0) return -1;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int s = *max_element(arr.begin(),arr.end());
    int e = sum;
    int ans = -1;

    while(s <= e){
        int mid = s+(e-s)/2;

        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return ans;

}


int main(){

    vector <int> arr = {40,30,10,20};
    int n = 4;
    int m = 2;

    cout<<minTimeToPaint(arr,n,m)<<endl;

    return 0;
}