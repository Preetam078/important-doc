#include<iostream>
using namespace std;

class Number {
   
   int a;
   public:
      Number(){
          a=0;
      }//default constructor
      Number(int num){
          a=num;
      }
      Number(Number &obj){
          cout<<"copy constructor called ";
          a= obj.a;
      }
      void display(){
          cout<<"the number for the object is "<<a<<endl;
      }
};

int main(){
    Number x , y(45),z2,z3;
    x.display();
    y.display();
    Number z1(x);//copy constructor invoked 
    z1.display();
    z2=y;// no copy constructor will be called 
    z2.display();
return 0;
}
//when no copy contructor found compiler supplies its own copy constructor.