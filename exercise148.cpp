//Palindrome Validation program(Using reverse function)

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

cout<<"Enter your string here : ";
string x;
cin>>x;

string rev = x;
reverse(rev.begin(),rev.end());
if(x == rev){
    cout<<"Your string is a Palindome.";
}else{
    cout<<"Your string is not a Palindrome.";
}

    return 0;
}