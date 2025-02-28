#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> vec = {1,3,5,7,9,11};
    int n = vec.size();
    int tar = 15;

    vector<int> res;

    int s = 0;
    int e = n -1;

    while(s < e){
        int sum = vec[s] + vec[e];

        if(sum == tar){
            res.push_back(s);
            res.push_back(e);
            break;
        }else if(sum > tar){
            e--;
        }else{
            s++;
        }

    }

    if(res.empty()){
        cout<<"Pair not found. "<<endl;
    }else{
        cout<<"The pair is "<<vec[res[0]]<<" and "<<vec[res[1]]<<endl;
    }


    return 0; 
}