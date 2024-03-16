/*
7.
Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.

*/

#include<iostream>
using namespace std;

class Area{
    private:
        int length,breadth,a;
    public:
    Area(int l, int b ){
        length=l;
        breadth=b;

    }

   int returnArea(){
       return 2*(length+breadth);

    }


};
main(){
    int l,b,a;
    cout<<"\n enter the length and breadth of triangle";
    cin>>l>>b;
    Area a1(l,b);
    
    a=a1.returnArea();
    cout<<"\n Area of Rectangle:"<<a;
}
