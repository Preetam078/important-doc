#include<iostream>
using namespace std;

class addition{
    int a,b;
    public:
    addition(void);// constructor is initailized(default constructor as it doesnot has any argument)
    void printdata(){
        cout<<"the addition is : "<<a+b<<endl;
    }
};
addition::addition(){
    a=10;
    b=20;
}

int main(){
    addition c1;
    c1.printdata();

return 0;
}
//constructor should be in the same as class
//it should be initailized in the public segment of the class 
//as soon as the object of the class will initialized the constructor will automatically invoked
//constructor doesnot have any return type
//it can have the default argument 
//default constructor is invoked as soon as we make an object in the main function.