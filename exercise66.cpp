//Calculate nCr binominal coefficient n & r.

#include<bits/stdc++.h>
using namespace std;

int factNum(int n){
        int facto = 1;
            for(int i = 1; i <= n; i++){
                facto = facto * i;
            }
            return facto;
}
int nCr(int n , int r){
    int fact_n = factNum(n);
    int fact_r = factNum(r);
    int fact_nMinusr = factNum(n-r);

    return fact_n / (fact_r * fact_nMinusr);
}

int main (){

       int n , r;
        cout<<"Enter the value of n & r here : ";
        cin>>n>>r;
        
        int result = nCr(n , r);
        cout<<result;
    

    return 0;
}
