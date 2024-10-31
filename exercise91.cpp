//Pair Sum brute force aproach in vector.

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(const vector<int> nums, int target){
    vector<int> pair;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    // pair.push_back(i); //If we want to print index of the pair.
                    // pair.push_back(j); 
                     pair.push_back(nums[i]);
                     pair.push_back(nums[j]);
                     return pair;
                }
            }
        }
        return pair;
}

int main (){

        vector<int> vec = {2,7,11,15};
        int target = 26;

        vector<int> result = pairSum(vec,target);
        if(!result.empty()){
            cout<<result[0]<<","<<result[1]<<endl;
        }else{
            cout<<"No pair found. "<<endl;
        }

    return 0;
}