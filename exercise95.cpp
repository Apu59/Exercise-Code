//Majority Element(Moore's voting algorithm)

#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int> nums, int size){
    int freq = 0, ans = 0;
    for(int i = 0; i < size; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

int main(){

    vector<int> vec = {2,3,4,2,3,3,3,3,3};
    int size = vec.size();

    int result = majorityElement(vec,size);
    cout<<result<<endl;


    return 0;
}