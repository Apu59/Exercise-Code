// Pointers in C++ for DSA.
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


int main (){

    int a = 10;
    int* ptr = &a; //Define a pointer which store a adress of a variable.
    cout<< &a <<endl; //It will print the memory address of the variable a, which is a hexadecimal number.
    cout<< ptr <<endl; //Also it will print the address of a variable, because we pointed the pointer at address of a variable.
    cout<< &ptr <<endl; //Now it will print the address of the ptr(pointer) and it will different from a variable address.

    cout<<endl;

    float price = 100.25;
    float* ptr2 = &price;
    cout<< &price <<endl;
    cout<< ptr2 <<endl;
    cout<< &ptr2 <<endl;

    //Pointer to pointer 
    int** ptrP = &ptr; //This is pointer to pointer which store the address of ptr.
    cout<< &ptr <<endl; 
    cout<< ptrP <<endl; //Both will print the same value.

    // * ==> Dereference operator. It means value at address.
    // if we print this *(&a), then it will give the value which stored at addess a.

    cout<< *(&a) <<endl;
    cout<< *(ptr) <<endl; //Both will print the same value because &a address and ptr address is same and the value at the adress is 10.

    cout<<endl;

    //Null pointer 
    int** nPtr = NULL;  //Null pointer does not point to any memory location. 
    cout<< nPtr <<endl; //We can't dereference any null pointer because it doesn't have any memory location. 
    //It will print 0 because it does not have any memory location.
    








    return 0;
}