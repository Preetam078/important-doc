#include<iostream>
using namespace std;

class A{

   int a;
   public:
   void setData(int a){
        this->a = a;
   }
   void getData(){
       cout<<"the value of 'a' is : "<<a<<endl;
   }
};

int main(){
    A a;
    a.setData(4);
    a.getData();

return 0;
}

//This is a keyword which is the pointer which points to the object which invokes the member function.