//C++ STL 

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    cout<<"Without any element the vector size is : "<< vec.size() <<endl;  //Size = 0
    vec.push_back(1);
    cout<<"After push back 1 element vector size is : "<< vec.size() <<endl;  //Size = 1
    cout<<"After push back 1 element vector capacity is : "<< vec.capacity()<<endl;  // Capacity = 1
    vec.push_back(2);
    cout<<"After push back 2 element vector size is : "<< vec.size() <<endl;  //Size = 2
    cout<<"After push back 2 element vector capacity is : "<< vec.capacity()<<endl;  // Capacity = 2
    vec.push_back(3);
    cout<<"After push back 3 element vector size is : "<< vec.size() <<endl; //Size = 3
    cout<<"After push back 3 element vector capacity is : "<< vec.capacity() <<endl; //capacity = 4
    vec.push_back(4);
    cout<<"After push back 4 element vector size is : "<< vec.size() <<endl; //Size = 4
    cout<<"After push back 4 element vector capacity is : "<< vec.capacity() <<endl; //capacity = 4
    vec.emplace_back(5);  //emplace_back() almost works same as push_back()
    cout<<"After push back 5 element vector size is : "<< vec.size() <<endl; //Size = 5
    cout<<"After push back 5 element vector capacity is : "<< vec.capacity() <<endl; //capacity = 8

    cout<<"Vector elements are : ";
    for(int val : vec){
        cout<< val <<" ";
    }
    cout<<endl;

    vec.pop_back(); //It will pop lasst element form vector which is 5 int this vector 
    cout<<"After poped one element the vector elements are : ";
    for(int val : vec){
        cout<< val <<" ";  //Now it will print 1 2 3 4 because 5 is popped
    }

    cout<<endl;
    cout<<"Element at index 2 is : "<<vec[2]<<endl;  //For print any index element 
    cout<<"Element at index 3 is : "<<vec.at(3)<<endl;

    cout<<"Front element of the vector is : "<< vec.front()<<endl; //for display front element from the vector
    cout<<"Back element of the vector is : "<< vec.back()<<endl; //for display back element from the vector

    cout<<endl;

    cout<<"Vector declare with values : ";
    vector<int> vec_2 = {1,2,3,4,5};
    for(int val : vec_2){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"Advance declaration of vector(used in Dynamic Programming) : ";
    vector<int> vec_3(5,10);
    for(int val : vec_3){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"If we want to store elements of any vector in another vector : ";
    vector<int> vec_4(vec_3);
    for(int val : vec_4){
        cout<<val<<" ";
    }
    cout<<endl;
    
    vector<int> vec_5 = {1,2,3,4,5};
    vec_5.erase(vec_5.begin()); //It will remove the first index element
    cout<<"After erase first element the vector elements are : ";
    for(int val : vec_5){
        cout<<val<<" ";  //Output will 2 3 4 5
    }
    cout<<endl;
    vec_5.erase(vec_5.begin() + 2); //It will remove 2nd index element form the vector(after remove 1st index element)
    cout<<"After erase 2nd index element the vector elements are : ";
    for(int val : vec_5){
        cout<<val<<" ";  //Output will 2 3 5
    }
    cout<<endl;
    vector<int> vec_6 = {1,2,3,4,5};
    cout<<"If we want to delete a range of element(like 1th index to 2th index ) : ";
    vec_6.erase(vec_6.begin()+1,vec_6.begin()+3);
    for(int val : vec_6){
        cout<<val<<" ";  //Output will 1 4 5
    }
    cout<<endl;
    vector<int> vec_7 = {1,2,3,4,5};
    cout<<"If we want to insert an element at the perticuler index then(inser 100 in 2th index) : ";
    vec_7.insert(vec_7.begin()+2,100);
    for(int val : vec_7){
        cout<<val<<" ";  //Output will 1,2,100,3,4,5
    }
    cout<<endl;

    vector<int> vec_8 = {1,2,3,4,5};
    vec_8.clear();
    cout<<"After used clear function, the vector elements are : ";
    for(int val : vec_8){
        cout<<val<<" "; //All elements removed
    }
    cout<<endl;
    cout<<"Vector vec_8 size after clear function used : "<<vec_8.size()<<endl; //Size will be 0
    cout<<"Vector vec_8 capacity after clear function used : "<<vec_8.capacity()<<endl; //Capacity will remains same as like main vector

    cout<<"Is the vector is empty : "<<vec_8.empty()<<endl;  //It returns bool output 1 and 0

    cout<<endl;
    cout<<endl;
    cout<<"Vector Iterators"<<endl;

    vector<int> vec_9 = {1,2,3,4,5};
    cout<<"Value of vec_9.begin() is : "<<*(vec_9.begin())<<endl; //It will return 1
    cout<<"Value of vec_9.end() is : "<<*(vec_9.end())<<endl; //It will return 0 not 5 because it not pointing the lasrt element of the vector it is pointing the memory location after the 5 element



    
    return 0;
}