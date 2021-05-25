#include<bits/stdc++.h>
using namespace std;
class Complex{
    int a;
    int b;
  public:
   //friend finction is not the part of the class but it actually has the capability to do anything 
   //with the private data of the class as it has the authority to do so.
     friend Complex sumComplex(Complex o1,Complex o3);
     void setdata(int v1 ,int v2){
         a=v1;
         b=v2;
     }
     void view(void){
         cout<<"complex no. is : "<<a<<"+i"<<b<<endl;
     }
};

Complex sumComplex(Complex o1,Complex o2){
  Complex o3;
  o3.setdata((o1.a+o2.a),(o1.b+o2.b));
  return o3;
}
int main(){
    Complex c1,c2,c3;
    c1.setdata(1,2);
    c1.view();

    c2.setdata(2,5);
    c2.view();

    c3=sumComplex(c1,c2);
    c3.view();
return 0;
}
/*property of the friend function 
1. The body of the friend function always be there out of the scope.
2. As the friend function doesn;t a part of class hence it can't be called throught objects
   eg-  c1.friend_function()==Invalid
3. can be declared inside the private or the public body of the class
*/