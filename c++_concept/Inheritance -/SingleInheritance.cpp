#include<iostream>
using namespace std;

class Base{
    int data;// not inheritable as private member
    public:
    int data2 ; //inheritableas it is public member
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData(void){
    data = 3;
    data2 = 10;
}
 int Base :: getData1(){
     return data;
 }

 int Base:: getData2(){
     return data2;
 }
class Derived : public Base{
     int data3;
     public: 
     void process();
     void display();
};

void Derived :: process(){
    data3 = data2 * getData1();
}
void Derived :: display(){
    cout<<"value of the data1 is  "<<getData1()<<endl;
    cout<<"value of the data2 is  "<<data2<<endl;
    cout<<"value of the data3 is  "<<data3<<endl;
}
int main(){

  Derived preetam;
  preetam.setData();
  preetam.process();
  preetam.display();
return 0;
}