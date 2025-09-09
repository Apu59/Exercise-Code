//Armstrong number 

#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;
    while(n != 0){
        int digit = n % 10;
        int cubes = (digit * digit * digit);
        sumOfCubes += cubes;

        n = n / 10;
    }
    return copyN == sumOfCubes ? true : false;
}

int main(){

    int n = 371;
    if(isArmstrong(n)){
        cout<<n<<" is an Armstrong number."<<endl;
    }else{
        cout<<n<<" is Not an Armstrong number."<<endl;
    }

    return 0;
}