//Vetort Iterator

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};

    cout<<"Value of vec_9.begin() is : "<<*(vec.begin())<<endl; //It will return 1
    cout<<"Value of vec_9.end() is : "<<*(vec.end())<<endl; //It will return 0 not 5 because it not pointing the lasrt element of the vector it is pointing the memory location after the 5 element


    vector<int> :: iterator it;  //Vector iterator declaration (It gives us the access of the meamory location)
    for(it = vec.begin(); it != vec.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it = vec.rbegin(); it != vec.rend(); it++){  //reverse iterator with auto
        cout<<*(it)<<" ";
    }





    return 0;
}