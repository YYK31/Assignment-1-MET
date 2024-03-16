/*8.
Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.
*/

#include<iostream>
using namespace std;

class Avg{
      private:
      int a,b,c;
      float av;

      public:
      void set() {
      cout<<"enter the three value ";
      cin>>a>>b>>c;
        
      }
      void get(){
        av=(a+b+c)/3;
        cout<<"Average :"<<av;
      }

};

class info:public Avg{

    
};

main(){
    info obj;
    obj.set();
    obj.get();
}