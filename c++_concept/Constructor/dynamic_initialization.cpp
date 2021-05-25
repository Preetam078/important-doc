#include<iostream>
using namespace std;

class Bank {
  
   int principle;
   int years;
   float rate;
   float amount;

   public:
     Bank(){}
     Bank(int p,int y, float r);// r can be the float like 0.04
     Bank(int p, int y, int r);
     void show(void){
         cout<<endl;
         cout<<"principle amount was "<<principle<<endl;
         cout<<"year was "<<years<<endl;
         cout<<"rate was "<<rate<<endl;
         cout<<"return value will be "<<amount<<endl;
     }
};

 Bank::Bank(int p, int y, float r){
     principle = p;
     years = y;
     rate = r;
     amount =  principle;
    
    for(int i=0;i<y;i++){
        amount = amount*(1+rate);
    }
 }

Bank::Bank(int p, int y, int r){
     principle = p;
     years = y;
     rate = float(r)/100;
     amount =  principle;
    
    for(int i=0;i<y;i++){
        amount = amount*(1+rate);
    }
 }
int main(){

Bank preetam;
int p,y;
float r;
int R;

cout<<"enter the Value of p, y , r"<<endl;
cin>>p>>y>>R;
preetam = Bank(p,y,R);
preetam.show();


return 0;
}