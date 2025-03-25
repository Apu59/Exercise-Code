//Stck in c++

#include<iostream>
#include<stack>
using namespace std;

int main(){

//Stack maintain LIFO(Last In First Out) sequence.

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Top = "<<s.top()<<endl;
    cout<<"Size = "<<s.size()<<endl;

    stack<int> s2;
    s2.swap(s); //Now s2 size is 3 and s size is 0
    cout<<"s size = "<<s.size()<<endl;
    cout<<"s2 size = "<<s2.size()<<endl;

    while(!s2.empty()){
        cout<<s2.top()<<" "; // this will print exactly reverse order as we push in the stack 3 2 1.
        s2.pop();
    }


    return 0;
}