#include<iostream>
#include<fstream>

/*
the usefull classes for working with C++ are:
fstreambase
ifstream --> derived from fstreambase
pfstream --> derived from the fstreambase

there are two ways to open a file:
-> using the constructor
-> using the member function open() of the class 
using namespace std;
*/

using namespace std;
int main(){
    string st = "this is the first demo";
    //opening files using constructor and writing it.
    ofstream out("simpleFile.txt"); //ofstream is a constructor
    out<<st;
    string st2;
    //opening files using constructor and reading it.
    ifstream in("simpleFile.txt"); //ofstream is a constructor
    getline(in, st2);
    cout<<st2<<endl;
return 0;
}