#include<iostream>
using namespace std;

class Employee
{    int Id;
     static int count;
     public: 
     void setData(void){
         cout<<"enter the Id"<<endl;
         cin>>Id;
         count ++;
     }
     void getData(void){
         cout<<"the Id of th employee is  : ";
         cout<<Id<<endl;
         cout<<"the Employee Number is : "<<count<<endl;
     }
     
     static void getCount(void){  //static function --> it calls automatically no need to initialise the object
         cout<<"the value of count is : "<<count<<endl;
         //only work on the Staic variable
     }
};

 int Employee ::count; //static variable associated with the class
 // Default value of the Static variable is 0  but we can appoint value in case.
 //static variable takes the memory once and then update and shared by all the members in the class
int main(){
  Employee preetam,Riya;
  preetam.setData();
  preetam.getData();

  Riya.setData();
  Riya.getData();

  Employee::getCount();

return 0;
}