#include<iostream>
using namespace std;
class Base1{
   public:
   void greet(){
       cout<<"how are you ?"<<endl;
   }
};

class Base2{
   public: 
    void greet(){
        cout<<"kese ho ?"<<endl;
    }

};

class Derived : public Base1 , public Base2{
   int a;
   public: 
   void greet(){
       Base1 :: greet(); //this will solve the ambiguity resolution 
   }
};
int main(){

    Base1 preetam;
    Base2 riya;
    preetam.greet();
    riya.greet();
    Derived obj;
    obj.greet();

return 0;
}