#include<iostream>
using namespace std;
class overloading{
    int a,b;
    public:
    overloading(){
        a=0;
        b=0;
    }
    overloading(int x, int y){
        a=x;
        b=y;
    }
    overloading(int x){
        a=x;
        b=0;
    }
    void printview(){
        cout<<"the complex number is : "<<a<<"+i"<<b<<endl;
    }
};
int main(){
    overloading c1(6,7);
    c1.printview();

    overloading c2(7);
    c2.printview();

    overloading c3;
    c3.printview();

return 0;
}