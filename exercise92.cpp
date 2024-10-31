//Pair sum most optimised algorithm.

#include<iostream>
#include<vector>
using namespace std;

vector<int> findPairSum(const vector<int> nums, int target){
    vector<int> pair;
    int i = 0;
    int j = nums.size()-1;
    while(i < j){
        int pairSum = nums[i]+nums[j];
        if(pairSum < target){
            i++;
        }else if(pairSum > target){
            j--;
        }else{
            pair.push_back(nums[i]);
            pair.push_back(nums[j]);
            return pair;
        }
    }
    return pair;  //return empty pair, if no pair found.
}

int main(){

    vector<int> vec = {2,7,11,15};
    int target =18;

    vector<int> result = findPairSum(vec,target);
    if(!result.empty()){
        cout<<result[0]<<","<<result[1]<<endl;
    }else{
        cout<<"No pair found.";
    }

    return 0;
}