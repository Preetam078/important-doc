#include<iostream>
using namespace std;

class kirana{
    int id;
    float price;

    public:
      void setData(int a ,float b){
          id = a;
          price = b;
      }
      void getData(void){
          cout<<"the item id is : "<<id<<endl
              <<"the item price is : "<<price<<endl;
      }
};

int main(){
    int size =3;
    int p;
    float q;
    kirana *ptr = new kirana[size];
    kirana *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter id and price of item : "<<i+1;
        cin>>p>>q;
        ptr->setData(p,q);
        ptrTemp++;
    }
    for(int i=0;i<size;i++){
        ptr->getData();
        ptrTemp++;
    }
    
return 0;
}