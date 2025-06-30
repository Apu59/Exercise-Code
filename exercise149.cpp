//Check Valid Palindrome(Alphanumeric)

#include<iostream>
using namespace std;

bool isAlphaNumeric(char x){
    if((x >= '0' and x <= '9') || (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
        return true;
    }
    return false;
}

bool checkPalindrome(string x){
    int st = 0, end = x.length()-1;
    while(st < end){
        if(!isAlphaNumeric(x[st])){
            st++;
            continue;
        }
        if(!isAlphaNumeric(x[end])){
            end--;
            continue;
        }
        if(tolower(x[st]) != tolower(x[end])){
            return false;
        }
        st++, end--;
    }
    return true;
}


int main(){

cout<<"Enter your Alphanumeric string here : ";
string x;
getline(cin,x);
bool isPalindrome;

isPalindrome = checkPalindrome(x);
if(isPalindrome == true){
    cout<<"The string is a Palindrome.";
}else{
    cout<<"The string is not a Palindrome.";
}

    return 0;
}