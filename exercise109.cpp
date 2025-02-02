//Multiple book with same ID 

#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr, int n,int tar){
    int s = 0, e = n-1, res = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == tar){ 
        res = mid;
        e = mid -1;
        }else if(arr[mid] < tar){
            s = mid + 1;
        }else{
            e = mid -1;
        }
    }
    return res;
}

int lastOccurence(vector<int>arr,int n, int tar){
    int s = 0, e = n-1, res = -1;
    while(s <= e){
        int mid = s+(e-s)/2;
        if(arr[mid] == tar){
        res = mid;
        s = mid + 1;
        }else if(arr[mid] < tar){
            s = mid + 1;
        }else{
            e = mid -1;
        }
    }
    return res;
}

vector<int> allOccurence(vector<int>arr,int firstOcc,int lastOcc){
    vector<int> allID;
    for(int i = firstOcc; i <= lastOcc; i++){
        allID.push_back(i);
    }
    return allID;
}


int main(){

    vector<int> arr = {102,104,106,106,106,108};
    int n = arr.size();
    int src = 106;

    int firstID = firstOccurance(arr,n,src);
    int lastID = lastOccurence(arr,n,src);

    if(firstID != -1 && lastID != -1){
        vector<int> allIDs = allOccurence(arr,firstID,lastID);
        for(int val : allIDs){
            cout<<val<<" ";
        }
    }else{
    cout<<"ID not found in the shelf "<<endl;
    }

    return 0;
}