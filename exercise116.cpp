#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    int T;
    cin>>T;

    vector<int> arr(T);
    for(int i = 0; i < T; i++){
        cin>>arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;


    for(int i = 0; i < T; i++){
        currentSum = currentSum + arr[i];
        maxSum = max(currentSum,maxSum);

        if(currentSum < 0) currentSum = 0;
    }

    cout<<maxSum<<endl;


    return 0;
}