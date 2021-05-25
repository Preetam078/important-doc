#include<iostream>
using namespace std;

int differenceHeight(int arr[],int n, int k){

    int mid = n/2;
    for(int i=0;i<mid;i++){
        arr[i] = arr[i]+k;
    }
    for(int i = mid+1;i<n;i++){
        arr[i] = arr[i]-k;
    }

    int diff = arr[n-1]-arr[0];
    return diff;
}

int main(){
  int arr[]={3, 9, 12, 16, 20},k;
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"enter the k value : ";
  cin>>k;
  cout<<"the difference is : "<<differenceHeight(arr, n, k)<<endl;
return 0;
}