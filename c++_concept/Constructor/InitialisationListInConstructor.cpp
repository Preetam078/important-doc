#include<iostream>
using namespace std;
/*
syntax:

constructor(argument-list) : inilialisation-section
{
    body;
}
*/

class Test{
   int a,b;
    public:
  //  Test(int i , int j):a(i),b(j){
  //  Test(int i , int j):a(i),b(i+j){
     Test(int i , int j):a(i),b(a+j){
      
        cout<<"constructor executed "<<endl;
        cout<<"the value of a is : "<<a<<endl
            <<"the value of b is : "<<b<<endl;
    }
};
int main(){
  Test t(4,6);
return 0;
}