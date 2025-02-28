//SU CSE FEST Programming contest Question H solution 

#include <iostream>
using namespace std;

int main()
{

    int arr[3];
    int N, res = 0;
    cin >> N;

    while (N > 0)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        int sum = arr[0] + arr[1] + arr[2];
        if (sum >= 2) res++;   
        N--;
    }

    cout<<res;


    return 0;
}