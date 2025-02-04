//Deque in STL(Double Ended Queue)

#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(5);
    dq.push_front(6);
    dq.emplace_back(2);
    dq.emplace_front(7);

    dq.pop_back();
    dq.pop_front();

    for(int val : dq){
        cout<<val<<" ";
    }

    cout<<endl;

//Its use Dynamic array and being an array we can access random element from this
    cout<<"Random access of element : ";
    cout<<dq[1];

    return 0;
}