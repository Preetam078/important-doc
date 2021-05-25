#include<iostream>
#include<fstream>
#include<string>//for getline()
using namespace std;

int main(){
   ofstream write;
   write.open("simpleFile.txt");
   write<<"this is preetam \n";
   write<<" this is the second attempt";
   write.close();

   ifstream read;
   string st;
   read.open("simpleFile.txt");
//    getline(read,st); //pit fall is it will only print the first line 
//    cout<<st<<endl;

    while(read.eof()==0){
        getline(read, st);
        cout<<st<<endl;
    }
   read.close();
   return 0;
}