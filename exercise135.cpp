//Set in STL
#include<iostream>
#include<set>
using namespace std;


int main(){

//Set stores unique values and it ignore duplicate values and it print values in sorted order.

    set<int> s;  //Set declaration 
    s.insert(1);  //Value insert by using insert() function 
    s.insert(2);
    s.insert(3);
    s.emplace(4); //Value insert by using emplace() function
    s.emplace(5);

    for(auto val : s){ //It will print 1 2 3 4 5
        cout<<val<<" ";
    }

    cout<<endl;

    cout<<"Size = "<<s.size()<<endl;  //It will print the set size

    cout<<"Count = "<<s.count(3)<<endl;  //It will print the count of the value 3

    if(!s.empty()){  //It will print Not empty because the set size is 5
        cout<<"Not empty. "<<endl;
    }else{
        cout<<"Empty."<<endl;
    }

    s.erase(1);  //It will erase 1 from the set 

    if(s.find(1) != s.end()){  //Now it will print Not found because we erase the 1
        cout<<"Found."<<endl;
    }else{
        cout<<"Not found."<<endl;
    }

    //Additional functions of set(which are not commonly used)

    cout<<"Lower bound = "<<*(s.lower_bound(4))<<endl; //It will print 4.
    //lower_bound() means minimum needed value. If we pass 4 and 4 exist in the set then it will print 4.
    //But if there is no 4 exist in the set then it will print just next larger value then 4.
    //If both not exist then it will print s.end().

    cout<<"Upper bound = "<<*(s.upper_bound(4))<<endl; //It will print 5
    //upper_bound() means greter value than key value, in this case key is 4 and 5 is just greter value than 4 which is exist in the set.
    //If there is no greter value exist in the set then it will print s.end();


    return 0;   
}