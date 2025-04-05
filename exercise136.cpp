//Multiset and Unordered Set in STL
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){

//Multiset works as like set but it can stores duplicate values and also print values in sorted order.

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.emplace(2); //Insert duplicate values
    ms.emplace(3);
    ms.emplace(4);

    cout<<"Multiset elements are :";
    for(auto val : ms){ //It will print 1 2 2 3 3 4 4 5
        cout<<val<<" ";
    }

//All other functions of set works same for multiset.

cout<<endl;

//Unordered set stores unique values as like set but it does not store in sorted order, it stores data in random order.

    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);

    cout<<"Unordered set elements are :";
    for(auto val : us){
        cout<<val<<" ";
    }

//upper_bound() and lower_bound() are not exist for unordered set because the container is not sorted.
//Whithout upper bound and lower bound other functions of set are works for this container.
//Unorder set functions time complexity is O(1) because data are not in sorted order.
//Thst's why the unordered set is one of the most optimized container int STL C++ and it used frequently in DSA problems.


    return 0;
}