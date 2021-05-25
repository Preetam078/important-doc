#include<iostream>
using namespace std;

class complex
{
   int a;
   int b;
   public: 
   void setData(int v1, int v2){
       a=v1;
       b=v2;
   }
   void setDataBySum(complex o1, complex o2){
       a=o1.a + o2.a;
       b=o1.b + o2.b;
   }
   void PrintNumber(void){
       cout<<"the Complex number is : "<<a<<"+i"<<b<<endl;
   }
};
int main(){
complex c1, c2, c3;
c1.setData(1,2);
c1.PrintNumber();
c2.setData(2,4);
c2.PrintNumber();
c3.setDataBySum(c1,c2); //here we passed the object of the class as a argument in the member function of the class
c3.PrintNumber();
return 0;
}