#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    ofstream write("simpleFile.txt");
    cout<<"enter your name"<<endl;
    string name;
    cin>>name;

    write<<name;
    
    write.close();//file closed 

    ifstream read("simpleFile.txt");
    string content;
    read>>content;
    cout<<"the content of the file is : "<<content<<endl;
    read.close();
return 0;
}