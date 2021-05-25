#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
   
   vector<int>v{1,2,3,4,5,6};
   vector<int>::iterator itr;
   for(itr = v.begin();itr!=v.end();itr++){
      cout<<*itr<<" ";
   }
   cout<<endl;
   v.push_back(10);
   for(itr = v.begin();itr!=v.end();itr++){
      cout<<*itr<<" ";
   }
   cout<<endl;
   v.insert(v.begin()+2,55);
   for(auto x : v){
      cout<<x<<" ";
   }
   cout<<endl;
   return 0;
}