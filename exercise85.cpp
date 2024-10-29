//Liner Search on a vector.

#include<iostream>
#include<vector>
using namespace std;

int linerSearch(const vector<int>& vec, int terget){ //By using const the function can access the numbers vector without modifying it and by using & i can get better memory management.
        for(size_t i = 0; i < vec.size(); i++){  //size_t is unsinged int data type, it better to use insted of int in this case.
            if(vec[i] == terget){
                return i;
            }
        }
        return -1;
}

int main (){

        vector<int> numbers = {2,3,5,7,8,9};
        int terget = 0;
        int result = linerSearch(numbers,terget);
        if(result != -1){
            cout<<"Item found at index "<<result<<endl;
        }else{
            cout<<"Item is not found "<<endl;
        }


    return 0;
}