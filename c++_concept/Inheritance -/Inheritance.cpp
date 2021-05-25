#include<iostream>
using namespace std;

class Employee{  // Base class
 
    public: 
    int id;
       float salary;
       Employee(int inpid){
       id = inpid;
       salary = 23.0;
       }
       Employee(){}
};

//derived class syntax

/*class {(derived-class-name)} : {(visibility-mode)} {(base class-name)}
{
    member;
}*/
//default visibility mode is private mode
//In private visibility mode the public ,member of the base class become the private member of the derived class
//In public visibility mode the public ,member of the base class become the public member of the derived class
//we cannot inherit the priovate members of the base class

//Derived Class 
class Programmer : private Employee{
    public:
    Programmer(int inpid){
        id = inpid;
    }
    int languageCode = 9;
};



int main(){
    Employee preetam(1);
    cout<<"the salary is "<<preetam.salary<<endl;
    Programmer skill(1);
    cout<<"the language code "<<skill.languageCode<<endl;

    

return 0;
}