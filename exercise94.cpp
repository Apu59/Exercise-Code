
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    int majorityElement(vector<int> nums){
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int freq = 1;
        int ans = nums[0];
        for(int i = 1; i < size; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            } else{
                freq = 1;
                ans = nums[i];
            }
            if(freq > size/2){
                return ans;
            }
        }
        return ans;
    }

int main (){

    vector<int> vec = {2,1,2,1,1,2,2};
    int result = majorityElement(vec);
    cout<<result<<endl;

    return 0;
}