//we use the templates to avoid DRY(donot repeat your code).
/*
syntax
template<class T> //T can be int, float, char, etc
class vector{
    T*arr;
    public:
    vector(T*ar){
        //code
    }
};
*/
#include<iostream>
using namespace std;
template <class T>
class vector{
  
   public:
   T *arr;
   int size;
   vector(int a){
       size = a;
       arr = new T[size];
   }
   T dotProduct(vector &v){
       T d = 0;
       for(int i=0;i<size;i++){
             d += this->arr[i]*v.arr[i];
             
       }
       return d;
   }
};
int main(){
    vector<float> v1(3);
    v1.arr[0]=4.1;
    v1.arr[1]=3.3;
    v1.arr[2]=7.5;
    vector<float> v2(3);
    v2.arr[0]=3.3;
    v2.arr[1]=5.1;
    v2.arr[2]=6.3;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;  
    return 0;
}