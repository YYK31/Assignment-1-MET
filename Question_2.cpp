/*Q.2 Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively 
by creating two objects of the class 'Student'.*/


#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    int rollno,phno;
    char address[100];
    char name[20];
public:
    Student(char name[],int rollno, int phno, char address[])
    {
        strcpy(this ->name,name);
        this ->rollno = rollno;
        this ->phno = phno;
        strcpy (this-> address,address);
    }
    void show()
		{
			cout<<"\n Name: "<<name<<"\n Roll No: "<<rollno<<"\n Phone No.: "<<phno<<"\n Address: "<<address;
		}
};
main()
{
	Student s1("Sam",20,9518711341,"Pune 411001");
	Student s2("John",30,8149794596,"Jalgaon 425001");
	s1.show();
	cout<<"\n-----------------------------";
	s2.show();
	cout<<"\n-----------------------------";
}
