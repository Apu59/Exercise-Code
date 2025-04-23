//Coin change(Count Ways) problem with recursive approach.

#include<iostream>
#include<vector>
using namespace std;

int countWays(vector<int>&coins, int n, int sum){
    if(sum == 0) return 1;
    if(sum < 0) return 0;
    if(n <= 0 && sum >= 1) return 0;

    return countWays(coins,n,sum-coins[n-1]) + countWays(coins,n-1,sum);
}

int main(){

    vector<int> coins = {1,2,3};
    int n = coins.size();
    int sum = 5;

    cout<<"The total way of calculate sum with those coins is : "<<countWays(coins,n,sum);

    return 0;
}