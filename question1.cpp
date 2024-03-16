/*1.
Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
 Assign the value of roll_no as '2' and that of name as "John" 
 by creating an object of the class Student.
*/

#include<iostream>
#include <string.h>
using namespace std;

 class student{
    private:
        char name[40];
        int roll_no;
        public:
            student(int r,char n[]){
                roll_no=r;
                strcpy(name,n);
            }
           void show(){
            cout<<"\n Roll no:"<<roll_no<<"\t Name:"<<name;
           } 

 };

main(){
    student s(2,"jack");
    s.show();

}