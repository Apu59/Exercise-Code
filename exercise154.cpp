//Sieve of Eratosthenes (Optimized prime number finding Algorithm)

#include<iostream>
#include<vector>
using namespace std;

int allPrimeNumber(vector<int> vec, int n){
    vector<bool> isPrime(n+1, true);
    int ans = 0;
    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            ans++;
            for(int j = i*2; j < n; j = j + i){
                isPrime[j] = false;
            }
        }
    }
    return ans;
}

int main(){

    vector<int> vec = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int n = vec.size();

    int result = allPrimeNumber(vec,n);
    cout<<result<<endl;

    return 0;
}