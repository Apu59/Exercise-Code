//Liner Search

#include<bits/stdc++.h>
using namespace std;

        int linerSearch(int arr[], int sz, int target)
             {
                for(int i = 0; i < sz; i++)
                {
                    if(arr[i] == target)
                    {
                        return i;
                    }
                }
                    return -1;
                }

int main (){

        int arr[] = {2,3,7,8,9,5};
        int sz = sizeof(arr) / sizeof(arr[0]);
        int src;

        cout<<"Enter what you want to search in the array : ";
        cin>>src;

        int result = linerSearch(arr, sz, src);

        if(result != -1)
        {
            cout<<"Item found at index number "<<result<<endl;
        }
        else
        {
            cout<<"Item is not found "<<endl;
        }

    return 0;
}