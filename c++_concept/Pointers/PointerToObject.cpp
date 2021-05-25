#include<iostream>
using namespace std;

class Complex{
int real, imaginary;
  public:
    void getData(){
         cout<<"the Real part is : "<<real<<endl
             <<"the Imaginary part is : "<<imaginary<<endl;
    }
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};
int main(){
   // Complex c1;
    //Complex *ptr = &c1;
    Complex *ptr = new Complex;
   // (*ptr).setData(10 ,20);
   ptr->setData(10, 20);
    //(*ptr).getData();
    ptr->getData();

return 0;
}