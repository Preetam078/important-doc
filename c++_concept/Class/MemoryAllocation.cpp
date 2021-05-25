//memory allocatiin in the class using array
#include<iostream>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public: 
     void initCounter(void){
         counter = 0;
     }
     void setPrice(void);
     void displayPrice(void);
};

void Shop::setPrice(void){
    cout<<"enter the itemID"<<endl;
    cin>>itemId[counter];
    cout<<"enter the item price "<<endl;
    cin>>itemPrice[counter];
    counter++;
}


void Shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price and the Id is : "<<itemId[i]<<" "<<itemPrice[i];
        cout<<endl;
    }
}
int main(){
   Shop preetam;
   preetam.initCounter();
   preetam.setPrice();
   preetam.setPrice();
   preetam.setPrice();
   preetam.displayPrice();
return 0;
}