/*14.
Write a program to calculate the average height of all the students of a class.
The number of students and their heights are entered by the user.
 */

#include<iostream>
using namespace std;

class student{
    private:
    int n;
    float h[10],avg,total;
    public:

    void set(){
        cout<<"enter the number of student";
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>h[i];
            total+=h[i];
        }
    }

    void get(){
        avg=total/n;
        cout<<"\n Average:"<<avg;
    }


};

main(){
    student s;
    s.set();
    s.get();

}
