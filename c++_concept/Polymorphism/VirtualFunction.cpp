#include<iostream>
using namespace std;
class baseClass{
  public:
   int var1=1;
   virtual void display(){ //base class pointer pointing to the derived class will display the derived member function from now.
       cout<<"1. display the base class variable : "<<var1<<endl;
   }

};
class derivedClass: public baseClass{
  public:
   int var2 =3;;
   void display(){
       cout<<"2. display the base class variable : "<<var1<<endl;
       cout<<"2. display the derived class variable : "<<var2<<endl;
   }
};
int main(){
    baseClass *ptr;
    derivedClass obj;
    ptr = &obj;
    ptr->display();

return 0;
}