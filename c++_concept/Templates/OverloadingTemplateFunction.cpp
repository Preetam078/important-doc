#include<iostream>
using namespace std;

template <class T>
class preetam{
     public:
     T data;
     preetam(T a){
         data = a;
     }
     void display();
};
 template<class T>
 void preetam<T>:: display(){
      cout<<"the data is : "<<data<<endl;
 }

void func(int a){
    cout<<"i am 1st function :"<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"i am templatised function :"<<a<<endl;
}

int main(){
   preetam<int>obj(5);
   obj.display();
   func(4); // exact match takes the highest priority
return 0;
}