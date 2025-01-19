//Aggressive Cows Problem with Binary Search.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &arr, int N, int c, int minAllowedDistance){
    int cows = 1; //Initialize with 1 cow
    int lastStallPossition = arr[0]; //Last possition is the 1'st cow which we initialize and possition is the first index

    for(int i = 1; i < N; i++){

        if(arr[i] - lastStallPossition >= minAllowedDistance){
            cows++;
            lastStallPossition = arr[i];
        }

        if(cows == c) return true;  //If cows count match with c then its pissible answer

    }

    return false;

}

int getDistance(vector<int> &arr, int N, int c){
    sort(arr.begin(),arr.end()); //Sort is mandetory for placing cows in the stall

    int s = 1;  //Minimum distance 0 not possible 
    int e = arr[N-1] - arr[0];  //End is the maximum distance between 2 cows
    int ans = -1;  //

    while(s <= e){
        int mid = s+(e-s)/2;

        if(isPossible(arr,N,c,mid)){
            ans = mid; //Update answer
            s = mid + 1;  //Go for larger distance
        }else{
            e = mid - 1; //Go for possible answer which is smaller then mid
        }
    }

    return ans;
}

int main(){
    vector<int> arr = {1,2,4,8,9};
    int N = 5;
    int c = 3;

    cout<<getDistance(arr,N,c)<<endl;


    return 0;
}