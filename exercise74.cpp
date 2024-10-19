// Find the smallest number in an array

#include<bits/stdc++.h>
using namespace std;

int main (){

    //Declare and define array from user input 
        int n;
        cout<<"Enter the size of the array : ";
        cin>>n;

        int size = n;
        int nums[n];
        for(int i = 0; i < size; i++){
            cin>>nums[i];
        }

        cout<<endl;

        cout<<"The array is : ";
        for(int i = 0; i < size; i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;

        // int nums[] = {12,54,65,9,-3,-15,-59,45,78,};
        // int size = sizeof(nums) / sizeof(int);

    //Find the smallest number in the array 
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for(int i = 0; i < size; i++){
            // smallest = min(nums[i] , smallest);  //We can use min function to compare between two numbers that which one is smallest. 
            // largest = max(nums[i] , largest);   /We can use max function to compare between two numbers that which one is largest. 
            if(nums[i] < smallest){
                smallest = nums[i];
            }
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
        cout<<"The smallest number of the array is : "<<smallest<<endl;
        cout<<"The largest number of the array is : "<<largest<<endl;

    return 0;
}