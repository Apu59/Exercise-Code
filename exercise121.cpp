#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool ispossible(vector<int>&arr,int cow,int maxV,int n){
    int currentc=1;
    int currentd=0;
    for(int i=0;i<n;i++){
        if(currentd-arr[i]<=maxV){
            currentd+=arr[i];
        }
        else{
            currentc++;
            currentd=arr[i];
        }
    }
    if(currentc>cow) return -1;
}

int aggressiveCow(vector<int>&arr,int n, int cow){
    if(cow>n){
        return false;
    }
    int sum=0;
    int maxvalue=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxvalue=max(arr[i],maxvalue);
    }
    int high=sum;
    int low=maxvalue;
    int mid;
    int ans=-1;
    while(low<=high){
     mid=low+(high-low)/2;
     if (ispossible(arr,cow,mid,n)){
         ans=mid;
         high=mid-1;;
     }
     else{
         low=mid+1;
     }
    }
    return ans;
}
int main(){
    vector<int>arr={2,1,4,3};
    int n=arr.size();
    int cow=2;
    int result=aggressiveCow(arr,n,cow);
    cout<<result<<endl;
    
  return 0;
}