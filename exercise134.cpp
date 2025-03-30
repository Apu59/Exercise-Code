//Unordered Map in STL C++

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

//Unordered map can't store duplicate keys like map but its output is not sorted as like map,
//Because of this, unordered map time complexity is better than map which is O(1) but for map its O(logn).
//But in very rare case unordered map time complexity goes to O(n), but normaly we count it O(1).


    unordered_map<string,int>um;

    um.insert({"tv",50});
    um.emplace("watch",25);

    for(auto p : um){
        cout<<p.first<<" "<<p.second<<endl;
    }

//We will know about unordered map in details into Hashing chapter.

    return 0;
}
