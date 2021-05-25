#include<iostream>
using namespace std;

class Base1{
  protected:
   int baseInt1;
   public:
   void setBase1(int a){
       baseInt1 = a;
   }
};

class Base2{
  protected:
   int baseInt2;
   public:
   void setBase2(int b){
       baseInt2 = b;
   }
};

class Derived : public Base1 , public Base2{
     public:
     void show(){
         cout<<"the value of base1 and base2 "<<baseInt1<<" "<<baseInt2<<endl;

     }
};

int main(){
  Derived preetam;
  preetam.setBase1(2);
  preetam.setBase2(6);
  preetam.show();
return 0;
}