//Pair int C++
// Pair is an utility library container, we don't need to include any header file to create a pair.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<char,int> p2 = {'A',5};
    cout<<p2.first<<" "<<p2.second<<endl;

    cout<<endl;

    //pair of pair

    pair<int, pair<char,int>> pp = {5,{'A',9}};
    cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second<<" "<<endl;

    cout<<endl;

    //Vector of pair

    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4},{4,5},{5,6}};

    for(pair<int,int> val : vec){
        cout<<val.first<<" "<<val.second<<endl;
    }

    cout<<endl;

    vec.push_back({6,7}); //insert 
    vec.emplace_back(7,8); //in-place object create 

    //The basic difference between push_back() and emplace_back() is 
    //if we need push element as a pair we have to use push_back() because push_back() assume that object already created and it have to just insert at the back of the vector
    //But whene we use emplace_back() we can use random 2 number by put comma between them and emplace_back() convert these random number into object and then insert at the back of the vector.

    //Basically push_back() did not create object it just insert at the back of the vector but emplace_back() create in place object and then insert the pair at the back of the vector. 

    cout<<endl;

    for(auto val : vec){  //We also can use auto iterator for print vector pair
        cout<<val.first<<" "<<val.second<<endl; 
    }

    







    return 0;
}