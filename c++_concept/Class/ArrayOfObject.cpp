#include<iostream>
using namespace std;

class Employee
{
   int id;
   long int salary;
   public:
     void setId(void){
         salary = 12222;
         cout<<"enter the Id of employee"<<endl;
         cin>>id;
     }
     void getId(void){
         cout<<"the id of this employee is"<<endl;
         cout<<id<<endl;
     }
};
int main(){
  Employee member[4];
  for(int i=0;i<4;i++){
      member[i].setId();
      member[i].getId();
  }
return 0;
}