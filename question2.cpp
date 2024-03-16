/*2.
Assign and print the roll number, phone number and address of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.

*/
#include<iostream>
#include <string.h>
using namespace std;

 class student{
    private:
        char name[40],add[50];
        int roll_no;
        long int p_no;
        public:
            student(int r,char n[],long int p,char a[]){
                roll_no=r;
                strcpy(name,n);
                p_no=p;
                strcpy(add,a);
            }
           void show(){
            cout<<"\n Roll no:"<<roll_no<<"\t Name:"<<name<<"\t Phone no."<<p_no<<"\t Address:"<<add;
           } 

 };

main(){
    student s(2,"Sam",7888145720,"Nashik"),s1(3,"John",9352486578,"Mumbai");
    
    s.show();
    s1.show();

}