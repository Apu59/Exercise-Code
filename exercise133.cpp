//Multimap in STL C++

#include<iostream>
#include<map>
using namespace std;


int main(){

//The main difference between map and multimap is , multimap can store duplicate keys and 
//we have to use insert() or emplace() function for insert values in multimap, we can not use [] like map.
//Other functionality are same as like map.

    multimap<string,int> mm; //Multimap declaration

    mm.insert({"tv",25}); //Insertion value in multimap
    mm.insert({"tv",25});
    mm.insert({"tv",25});
    mm.emplace("watch",50);
    mm.emplace("watch",50);
    mm.emplace("watch",50);

    for(auto p : mm){
        cout<<p.first<<" "<<p.second<<endl;
    }

    mm.erase("watch"); //It will erase all watch key with its value

    cout<<"After erase : "<<endl;
    for(auto p : mm){
        cout<<p.first<<" "<<p.second<<endl;
    }

    mm.erase(mm.find("tv")); //It will erase one tv key and its value

    cout<<"After erase one tv : "<<endl;
    for(auto p : mm){
        cout<<p.first<<" "<<p.second<<endl;
    }


    return 0;
}