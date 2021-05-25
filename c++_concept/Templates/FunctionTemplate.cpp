#include<iostream>
using namespace std;

template<class T>
void Swap(T &a,T &b){
    a = a+b-a;
    b = a+b-b;
}

template<class T1, class T2>

float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    int x=7,y=5;
    cout<<"before swapping a and b <<"<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<"after swapping a and b <<"<<a<<" "<<b<<endl;
    return avg;
}

int main(){
  float a;
  a = funcAverage(5,2);
  cout<<a<<endl;
return 0;
}