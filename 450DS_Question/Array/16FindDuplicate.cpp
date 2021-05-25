#include<iostream>
using namespace std;

void findDuplicate(int arr[], int n){
    for(int i=0;i<n;i++){
        int val = arr[i];
      for(int j=i+1;j<n;j++){
          if(val==arr[j]){
              cout<<"the repeated value is : "<<val;
          }
    }
  }
  cout<<endl;
} 
int main(){

    int arr[] = {1,3,4,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findDuplicate(arr, n);
     
return 0;
}