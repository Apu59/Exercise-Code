//Array pointers and Pointer Arithmaetic 
#include<iostream>
using namespace std;

int main(){
    //Array Pointers
    int arr[] = {1,2,3,4,5};  //Array name is one kind of pointer which is constant.
    cout<<arr<<endl; //Arr is one kind of pointer which points 0th index of the array, and this cout will give the memory location of the 0th index fo the array.
    cout<<*arr<<endl;  //Now the arr dereference will give the value of the 0th index which is 1.

    //Pointer Arithmetic

    //Inceent & Decrement 
    int a = 10;
    int* ptr = &a;
    ptr++;  //Now the ptr is incresed by 4 byte because of int data type.
    cout<< &a <<endl; //If the location is 100.
    cout<< ptr <<endl; //After p++ now the ptr location is 104.
    ptr--;
    cout<< ptr <<endl; //Now it will again give the location 100.
    //Increment and decrement works as same if ptr++ then location increse by 4 byte and if ptr-- then location decrese by 4 byte because int data type occupy 4 byte of memory.

    cout<<endl;

    //Adition & Subtraction
    cout<<"Add & Subtract"<<endl;
    int b = 20;
    int* p = &b;
    cout<< p <<endl;
    p+2; //It will add 2 int with the location of p which is 8 byte. If the location of p is 100 , now it is 108.
    cout<< p+2 <<endl; 
    //Same goes for ptr-2, it will give 100 - 8 = 92.

    cout<<endl;

    //Adition and Subtraction also applicable for Array pointers

    int nums[] = {50,60,70,80,90};
    cout<< *nums <<endl; //Output 50
    cout<< *(nums+1) <<endl; //Output 60
    cout<< *(nums+3) <<endl; //Output 80
    //When we are adding 1 it means it adding 1 int which is 4 byte and it is giving the next int in the array.
    //Same goes for nums-1, nums-2......

    cout<<endl;

    //In C++ we can't add 2 pointer but we subtract 2 pointers if both pointers type is same.
    int* ptr2; //100
    int* ptr1 = ptr2+2;
    cout<< ptr1 - ptr2 <<endl; //Output will 2

    cout<<endl;
    //Compare two pointers(<, >, <=, >=, ==, !=)

    int* pt1;
    int* pt2;
    cout<< pt1 <<endl;   //100
    cout<< pt2 <<endl;  //108
    cout<< (pt1 < pt2)<<endl; //Output will 1 because 100 is less then 108
    //Same goes for all the comparison operations.



    return 0;
}