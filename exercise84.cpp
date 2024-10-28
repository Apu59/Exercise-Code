//Static vs Dynamic allocation of memory in vector.

#include<iostream>
#include<vector>
using namespace std;

int main (){

        vector<int> vec;
        vec.push_back(0);
        vec.push_back(1);
        vec.push_back(2);
        cout<<vec.size()<<endl;  //Print 3
        cout<<vec.capacity()<<endl; //Print 4

        cout<<endl;

        vector<int> vect;
        vect.push_back(0);
        vect.push_back(1);
        vect.push_back(2);
        vect.push_back(3);
        vect.push_back(4);
        cout<<vect.size()<<endl;   //Print 5  
        cout<<vect.capacity()<<endl;  //Print 8



}