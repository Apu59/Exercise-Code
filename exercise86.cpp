//Reverse a vector. 

#include<iostream>
#include<vector>
using namespace std;

int reverseVec(vector<int>& vec, int sIndex, int eIndex){  //We don't have to use const here because we want to make change in the main vector without using any extra space, if we use const it will not possible and swap function give us an error.
            while(sIndex <= eIndex){
                swap(vec[sIndex], vec[eIndex]);
                sIndex++;
                eIndex--;
            }
}

int main(){

        vector<int> numbers = {1,2,3,4,5,6,7};
        int sIndex = 0;
        int eIndex = numbers.size()-1;

        cout<<"The reverse vector is : ";
        reverseVec(numbers,sIndex,eIndex);
        for(int val : numbers){
            cout<<val<<" ";
        }
        cout<<endl;

    return 0;
}