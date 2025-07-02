// Reverse word in String(LeetCode 151)

#include <iostream>
#include<string>
#include <algorithm>
using namespace std;

string revWordStr(string x){

    string ans = "";
    int n = x.length();
    reverse(x.begin(), x.end());

    for (int i = 0; i < n; i++){
        string word = "";
        while (i < n && x[i] != ' '){
            word += x[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (!word.empty()){
            ans +=" " + word;
        }
    }
    return ans.substr(1);
}

int main(){

    string s = "Leonel Messi";
    string result = revWordStr(s);
    cout<<result;

    return 0;
}