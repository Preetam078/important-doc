#include<bits/stdc++.h>
using namespace std;
class subtraction{
int a,b;
public:
subtraction(int,int); // parameterized constructor
void printview(){
    cout<<"the result is : "<<abs(a-b)<<endl;
}
};

subtraction::subtraction(int x, int y){
    a=x;
    b=y;

}

int main(){
     // implicit call
    subtraction c1(10,3);
    c1.printview();
     // explicit call
    subtraction c2 = subtraction(19,5);
    c2.printview();

return 0;
}