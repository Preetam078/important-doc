#include<bits/stdc++.h>
using namespace std;

class y;
class x{
    int a;
    public:
    void getdata(int v1){
        a=v1;
    }
    void show(){
        cout<<"the value of a : "<<a<<endl;
    }
    friend class Function;
};
class y{
    int b;
    public:
    void getdata(int v2){
        b=v2;
    }
    void show(){
        cout<<"the value of b : "<<b<<endl;
    }
    friend class Function;
};
class Function{
   public:
    int valuedata(x,y);
};

int Function::valuedata(x o1,y o2){
    int o3=o1.a+o2.b;
    return o3;
}
int main(){
    x o1;
    o1.getdata(3);
    o1.show();

    y o2;
    o2.getdata(5);
    o2.show();
    
    Function calc;
    int ans = calc.valuedata(o1,o2);
    cout<<"the addition : "<<ans<<endl;
return 0;
}