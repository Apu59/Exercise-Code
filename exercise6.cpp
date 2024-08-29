//Program to calculate the total marks, percentage and gread of a student.

#include<bits/stdc++.h>
using namespace std;


int main (){

        int oop, math, eee, total;
        float percentage;
        string sname, sroll; 
        char grade[10];

        cout<<"Enter student name here : ";
        getline(cin, sname);

        cout<<"Enter student roll here : ";
        cin>>sroll;

        cout<<"Submit your marks below "<<endl;

        cout<<"Enter OOP mark here : ";
        cin>>oop;

        cout<<"Enter Math mark here : ";
        cin>>math;

        cout<<"Enter EEE mark here : ";
        cin>>eee;

        total = oop + math + eee;
        percentage = total / 3.0;

        if(percentage > 100 || percentage < 0)
        {
            cout<<"Please enter valid marks for all subjects "<<endl;
        }
        else if(percentage >= 80 && percentage <= 100)
        {
            strcpy(grade , "A+"); 
        }
        else if (percentage >= 70 && percentage < 80 )
        {
            strcpy(grade , "A");
        }
        else if(percentage >= 60 && percentage < 70)
        {
            strcpy(grade , "A-");
        }
        else if(percentage >= 40 && percentage < 70)
        {
            strcpy(grade , "B");
        }
        else
        {
            strcpy(grade , "F");
        }

        cout<<endl;
        cout<<"Summary of student's sheet "<<endl;

        cout<<"Student name : "<<sname<<endl;
        cout<<"Student roll : "<<sroll<<endl;
        cout<<"Mark in OOP : "<<oop<<endl;
        cout<<"Mark in Math : "<<math<<endl;
        cout<<"Mark in EEE : "<<eee<<endl;
        cout<<"Total Marks : "<<total<<endl;
        cout<<"Percentage : "<<percentage<<endl;
        cout<<"Gread : "<<grade<<endl;
        

    return 0;
}