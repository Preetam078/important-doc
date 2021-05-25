#include<iostream>
using namespace std;

class baseClass{
  public:
   int var1;
   void display(){
       cout<<"display the base class variable : "<<var1<<endl;
   }

};
class derivedClass: public baseClass{
  public:
   int var2;
   void display(){
       cout<<"display the base class variable : "<<var1<<endl;
       cout<<"display the derived class variable : "<<var2<<endl;
   }
};
int main(){
    baseClass *ptr;
    baseClass obj1;
    derivedClass obj2;
    ptr = &obj2;  //pointer is of the base class pointing to the derived class but at the end it will excess the function of base class only this is called late binding.
    ptr->var1 =340;
    ptr->display(); 
    //though we are pointing to the derived class but still we can't excess the data member of the derived class.
    derivedClass *ptr1;
    ptr1 = &obj2;
    ptr1->var1 = 36;
    ptr1->var2 = 78;
    ptr1->display();
return 0;
}