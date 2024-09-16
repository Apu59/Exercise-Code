// Liner Search

#include <bits/stdc++.h>
using namespace std;

int linerSearch(int arr[], int sz, int target)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {2, 4, 5, 7, 8};
    int target = 7;
    int sz = sizeof(arr) / sizeof(arr[0]);

    int result = linerSearch(arr, sz, target);

    if (result != -1)
    {
        cout << "Item is found at index " << result << endl;
    }
    else
    {
        cout << "Item is not found " << endl;
    }

    return 0;
}