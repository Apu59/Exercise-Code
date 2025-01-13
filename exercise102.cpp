#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int student = 1, pages = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedPages) return false;

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            student++;
            pages = arr[i];
        }
    }

    return student > m ? false : true;

}

int allocateBooks(vector<int> &arr, int n, int m){
    if(m>n) return -1;

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    int st = 0, end = sum, ans = -1;
    while(st <= end){
        int mid = st+(end-st)/2;

        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return ans;
}


int main(){

    vector <int> arr = {10,20,30,40,50};
    int n = 5;
    int m = 2;

    cout<<allocateBooks(arr,n,m)<<endl;

    return 0;
}