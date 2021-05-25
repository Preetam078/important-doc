#include<iostream>
using namespace std;

template <class T1 =int ,class T2 =float>
class preetam{
    public:
    T1 a;
    T2 b; 
    preetam(T1 x, T2 y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"the value of  a and b is : "<<a<<" "<<b<<endl;
    }
};

int main(){
preetam<>obj(4,4.8); //default template will work
obj.display();
preetam<char,int>obj2('c', 3);
obj2.display();
return 0;
}