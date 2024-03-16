/*
12
Write a program to print the name, salary and date of joining of 10 employees in a company.
 Use array of objects.

Practice Problem
*/

#include<iostream>
using namespace std;

class Employee{
    private:
        char name[30];
        int year;
        float salary;
        public:
            void set(){
                cout<<"enter the employee name ,year of joining and salary";
                cin>>name>>year>>salary;
            }

            void get(){
                cout<<"\n"<<name<<"\t"<<year<<"\t"<<salary;
            }
    
};

main(){
    Employee e1[10];
    cout<<"\n enter the  information of 10 employee \n";
    for(int i=0;i<10;i++){
        e1[i].set();
    }
    cout<<"\n Name"<<"\t year"<<"\t salary";
    for(int i=0;i<10;i++){
        e1[i].get();
    }
}

