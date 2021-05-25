#include<iostream>
using namespace std;
int count =0;
class Num{
    public:
      Num(){
          count++;
          cout<<"constructor is called "<<count<<endl;
      }
      ~Num(){
          cout<<"this is the time when the destructor is called for "<<count<<endl;
          count--;
      }
};
int main(){
   cout<<"main function "<<endl;
   cout<<"creating two objects "<<endl;
   Num n1;
   {
       cout<<"creating two more object "<<endl;
       Num n2,n3;
       cout<<"exiting Block"<<endl;
       
   }
   cout<<"out from the main"<<endl;
return 0;
}

//destructor nether takes any argument not return any value