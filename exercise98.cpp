//Pass by reference(Alias) for DSA.

#include<iostream>
using namespace std;

void changeA(int &b){  //This is Alias and the & symble is not any location it is the symble of Alias. 
    b = 40;         // It means when we pass the a in the main fuction it will receive the a as Alias which is b and the location of b and a is same in this condition.
}

int main (){

        int a = 10;
        changeA(a);

        cout<<"After call the ChangeA function the value of a is : "<< a <<endl;


    return 0;
}