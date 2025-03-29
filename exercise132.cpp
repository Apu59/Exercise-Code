//Map in STL C++

#include<iostream>
#include<map>
using namespace std;


int main(){

//Map stores the data as key and value pair like key = student(Unique) and  valu = name

    map<string,int>m;  //create a map
    m["tv"] = 100;  //Insertion value in map
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;
    m.insert({"camera",25}); //Insertion by using insert  
    m.emplace("powerbank",80); //insertion by using emplace

    for(auto p : m){  //Print the map by using for each loop
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"Count of laptop = "<<m.count("laptop")<<endl; //It wil return the count of the particuler key

    cout<<"Value of laptop = "<<m["laptop"]<<endl; //It will print the value of the particuler key

    if(m.find("camera") != m.end()){ //Find returns the iterator if the key is found, if not found the it returns m.end();
        cout<<"found "<<endl;
    }else{
        cout<<"Not found "<<endl;
    }

    m.erase("watch"); //It will remove the watch key and its value from the map

    for(auto p : m){ //Now it will not print the watch key and its value
        cout<<p.first<<" "<<p.second<<endl;
    }

    cout<<"Size = "<<m.size()<<endl; //It will print the size of the map

    if(!m.empty()){  //It will check is the map empty of not
        cout<<"The map is not empty."<<endl;
    }else{
        cout<<"The map is empty."<<endl;
    }



    return 0;
}