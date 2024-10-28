//Vector in STL for DSA.

#include<iostream>
#include<vector>
using namespace std;

int main (){

    vector<int> vec = {1,3,5,7,9};  //Vector define and declair
    cout<<"The vector size is : "<<vec.size()<<endl;  //size() function for print the size of vector.
    vec.push_back(11); //To add any element at the last of the vector.
    cout<<"After bush_back the vector size is : "<<vec.size()<<endl;
    vec.pop_back(); //TO delete any element from last.
    cout<<"After pop_back the vector size is : "<<vec.size()<<endl;
    cout<<vec.front()<<endl; //To print first value.
    cout<<vec.back()<<endl; //To print last value.
    cout<<vec.at(1)<<endl; //To print any particuler index value form vector.
    for(int val : vec){  //Its call for each loop, it used to print vector or any kind of STL container.
        cout<<val<<" ";
    }

    return 0;
}