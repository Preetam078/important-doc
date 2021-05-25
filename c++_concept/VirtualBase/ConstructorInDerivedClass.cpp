#include<iostream>
using namespace std;

class Base{
    int data;
    public:
    Base(int i){
        data = i;
        cout<<"base constructor is called"<<endl;
    }
    void printData1(void){
        cout<<"the data is : "<<data<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"base2 constructor is called"<<endl;
    }
    void printData2(void){
        cout<<"the data is : "<<data2<<endl;
    }
};

class Derived : public Base2, public Base{
  int derived1, derived2;
  public:
    Derived(int a, int b, int c, int d):Base(a),Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"derived class called"<<endl;
    }
    void printDataDerived(){
           cout <<"value of derived1 is : "<<derived1<<endl
            <<"value of derived2 is : "<<derived2<<endl;
    }
};
int main(){
    Derived preetam(1,2,3,4);
    preetam.printData1();
    preetam.printData2();
    preetam.printDataDerived();
return 0;
}