// Pass by reference for DSA
#include<iostream>
using namespace std;

void changeA(int a){ //This is pass by value 
    a = 20;
}
void changeB(int* ptr){
    *ptr = 40;
}
int main (){
    int a = 10;
    changeA(a);

    int b = 20;
    int* ptr = &b;
    changeB(ptr);

    cout<<"After call the changeA function which is pass by value "<<a<<endl; //Value will be the same because it is pass by value, it passes a copy of the variable
    cout<<"After call the changeA2 function which is pass by reference "<<b<<endl;  //Value will change because it passes the memory location of the variable and function change the value in the location.


    return 0;
}