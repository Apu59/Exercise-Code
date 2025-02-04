//List in STL

#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main (){

    // list<int> l = {1,2,3,4,5};
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    l.emplace_back(3);
    l.emplace_front(4);

    l.pop_back();
    l.pop_front();

    for(int val : l){
        cout<<val<<" ";
    }


//List is one kinf of Dubly linked list that's why we can perform all our vector operation in list on both side front and back. 




    return 0;
}