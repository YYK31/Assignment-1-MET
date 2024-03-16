/*
6.
Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle.
 Length and breadth of the rectangle are entered through keyboard.

*/
#include<iostream>
using namespace std;

class Area{
    private:
        int length,breadth,a;
    public:
    setDim(int l, int b ){
        length=l;
        breadth=b;

    }

   int getArea(){
       return 2*(length+breadth);

    }


};
main(){
    int l,b,a;
    cout<<"\n enter the length and breadth of triangle";
    cin>>l>>b;
    Area a1;
    a1.setDim(l,b);
    a=a1.getArea();
    cout<<"\n Area of Rectangle:"<<a;
}
