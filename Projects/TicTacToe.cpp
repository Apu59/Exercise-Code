#include<iostream>
using namespace std;

int main (){

        int board[3][3];
        int row = 3;
        int col = 3;


        cout<<"Enter the values of 2D arrray here : ";
        for(int r = 0; r < row; r++){
            for(int c = 0; c < col; c++){
                cin>>board[r][c];
            }
        }

        // for(int r = 0; r < row; r++){
        //     for(int c = 0; c < col; c++){
        //         cout<<board[r][c];
        //     }
        //     cout<<endl;
        // }


        cout<<"The 2D array is : "<<endl;
        cout<<"   |   |   " <<endl;
        cout<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"   |   |   "<<endl;
        cout<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<endl;
        cout<<"___|___|___"<<endl;
        cout<<"   |   |   "<<endl;
        cout<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<endl;
        cout<<"   |   |   "<<endl;





    return 0;
}