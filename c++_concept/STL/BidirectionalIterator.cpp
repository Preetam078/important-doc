#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
  vector<int>v{1,2,3,4,5,6};
  vector<int>:: iterator itr;
  vector<int>::reverse_iterator ritr;
  for(auto x : v){
      cout<<x<<" ";
   }
   cout<<endl;
   for(ritr = v.rbegin();ritr!=v.rend();ritr++){
       cout<<*ritr<<" ";
   }
   cout<<endl;
return 0;
}