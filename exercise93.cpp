//Majority element.(Brute force aproach)

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(const vector<int>& nums){
    int size = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(val == el){
                freq++;
            }
        }
        if(freq > size/2){
            return val;
        }
    }
    return -1;
}

int main(){

    vector<int> vec = {2,1,2,1,1};
    int result = majorityElement(vec);
    cout<<result<<endl;


    return 0;
}