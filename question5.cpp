/*
5.
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.
*/

#include<iostream>
using namespace std;

class Rectangle{
        private:
            int lenghth,breadth;
        public:
            Rectangle(int l,int b){
                lenghth=l;
                breadth=b;
            }

            int Area(){
                return 2*(lenghth+breadth);
            }

} ;

main(){
    int R_Area1,R_area2;
    Rectangle r1(4,5);
    R_Area1=r1.Area();
    cout<<"\n area of rectangle:"<<R_Area1;
    Rectangle r2(5,8);
    R_area2=r2.Area();
    cout<<"\n area of rectangle:"<<R_area2;
}