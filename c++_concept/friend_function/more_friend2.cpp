#include<iostream>
using namespace std;
class b1;
class a1{
    int a;
    public:
    void data(int val1){
        a=val1;
    }    
    void show(){
        cout<<"the value of a : "<<a<<endl;
    }
      friend void swap(a1 &, b1 &);
};
class b1{
    int b;
    public:
    void data(int val2){
        b=val2;
    }    
    void show(){
        cout<<"the value of b : "<<b<<endl;
    }
    friend void swap(a1 &,b1 &);
};
void swap(a1 &x , b1 &y){
    int temp = x.a;
    x.a=y.b;
    y.b=temp;
}
int main(){
    a1 c1;
    c1.data(16);
    c1.show();

    b1 c2;
    c2.data(54);
    c2.show();

    swap(c1,c2);

    c1.show();
    c2.show();


return 0;
}