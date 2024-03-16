/*
4.
Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters.

*/

#include<iostream>
using namespace std;
class  Triangle{
    private:
        int a,b,c,base,hight;
        float T_area,perimeter;
        public:

          Triangle(int x,int y,int z,int base1, int hight1){
             a=x;
             b=y;
             c=z;
             base=base1;
             hight=hight1;
          }
          void area(){
            
            T_area=.5*(base*hight);
            cout<<"\n Area of triangle:"<<T_area;

          }

          void  peri(){
            
            perimeter=(a+b+c);
            cout<<"\n perimeter of triangle:"<<perimeter;
          }

};

main(){
    int a,b,c,base,hight; 
        cout<<"\n enter the three sides of triangle\n";
        cin>>a>>b>>c;
        cout<<"enter the value  of hight and base of triangle\n";
        cin>>hight>>base;
        Triangle t1(a,b,c,base,hight);
        t1.area();
        t1.peri();
}