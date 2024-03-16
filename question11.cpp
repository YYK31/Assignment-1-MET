/*
11.
Write a program that would print the information (name, year of joining, salary, address) 
of three employees by creating a class named 'Employee'. 
The output should be as follows:

Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat

*/
#include<iostream>
using namespace std;

class Employee{
    private:
        char name[30],add[50];
        int year;
        float salary;
        public:
            void set(){
                cout<<"enter the employee name ,year of joining,salary and address";
                cin>>name>>year>>salary>>add;
            }

            void get(){
                cout<<"\n"<<name<<"\t"<<year<<"\t"<<salary<<"\t"<<add;
            }
    
};

main(){
    Employee e1,e2,e3;
    e1.set();
    e2.set();
    e3.set();
    cout<<"\n Name"<<"\t year"<<"\tsalary"<<"\t address";
    e1.get();
    e2.get();
    e3.get();
}