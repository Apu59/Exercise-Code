#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr,int n, int m, int maxAllowedPages){
    int students = 1, pages = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] > maxAllowedPages) return false;

        if(pages + arr[i] <= maxAllowedPages){
            pages = pages + arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;

}

int allocateBooks(vector<int> &arr,int n, int m){
    if(m>n) return -1; //handle edge case

    int sum = 0;  //calculate the sum of pages
    for(int i = 0; i<n; i++){
        sum = sum+arr[i];
    }

    int ans = -1;
    int s = 0 , e = sum;  //The range of possible answer;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid; //update the answer
            e = mid-1;  //left side search
        }else{
            s = mid+1; //right side search
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {10, 20, 30, 40, 50};
    int n = 5;
    int m = 2;

    cout<<allocateBooks(arr,n,m)<<endl;

    return 0;
}