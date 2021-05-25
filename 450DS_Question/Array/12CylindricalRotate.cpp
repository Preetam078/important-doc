#include<iostream>
using namespace std;

void cylindricalRotate(int arr[],int n){
    int temp = arr[n-1];
        for(int i=n-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        cout<<"the Array is :";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        } 
        cout<<endl;
}


int main(){
  int arr[]={1,2,3,4,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  cylindricalRotate(arr,n);
return 0;
}