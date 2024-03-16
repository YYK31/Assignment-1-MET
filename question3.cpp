/*
3.
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.

*/
#include<iostream>
using namespace std;

class  Triangle{
    private:
        int a,b,c,base,hight;
        float T_area,perimeter;
        public:
          void area(){
            cout<<"enter the value  of hight and base of triangle";
            cin>>hight>>base;
            T_area=.5*(base*hight);
            cout<<"\n Area of triangle:"<<T_area;

          }

          void  peri(){
            cout<<"\n enter the three sides of triangle";
            cin>>a>>b>>c;
            perimeter=(a+b+c);
            cout<<"\n perimeter of triangle:"<<perimeter;
          }

};
main(){
    Triangle t1;
    t1.area();
    t1.peri();
}