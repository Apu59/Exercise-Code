//Remove all Occurrences of a Substring 

#include<iostream>
using namespace std;

string removeAllOccurrence(string x, string part){
    while(x.length() > 0 && x.find(part) < x.length()){
        x.erase(x.find(part), part.length());
    }
    return x;
}

int main(){

string x = "daabcbaabcbc";
string part = "abc";

string ans = removeAllOccurrence(x,part);
cout<<ans;

    return 0;
}