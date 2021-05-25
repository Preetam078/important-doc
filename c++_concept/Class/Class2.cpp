// Nesting of member function
#include<iostream>
#include<string>
using namespace std;

class Binary{
    
     string s;
     public:
        void read(void);
        void check_binary(void);
        void ones(void);
        void display(void);
};

void Binary :: read(void){
    cout<<"enter a binary number "<<endl;
    cin>>s;
}
void Binary :: check_binary(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
        
    }
}
void Binary:: ones(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else{
            s.at(i)='0';
        }
    }
}

void Binary:: display(void){
    cout<<"entered binary number is :  ";
    for(int i=0;i<s.length();i++){
       cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    Binary b;
    b.read();
    b.check_binary();
    b.display();
    b.ones();
    b.display();
return 0;
}

//OOPs --> classes and objects

//C++ --> initially called as C with classes and objects

//class --> extension of structure

//structure has the limitations

//--> All member are public
// ---> No methods 

//classes --> structure + more

//classes --> can have the methods and proterties
//classes --> can make few member as private and public 

//we can declare object along with the class declaration 

// class name{

// }object; 

//we cannot access the private member directly