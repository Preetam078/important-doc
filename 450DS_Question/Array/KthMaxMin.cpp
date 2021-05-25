//Kth max min element in the array
#include<bits/stdc++.h>
using namespace std;

int getKthMin(int arr[],int size, int k){
    int val = 0;
    int itr = 0;
    while(itr<=k){
        val = arr[itr-1];
        itr++;
    }
    return val;
}

int main(){
  int arr[]={7,10,4,3,12,15},k;
  int n = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr + n);
  cout<<"find the Kth value : ";
  cin>>k;
  cout<<"the kth smallest value in the array: "<<getKthMin(arr,n,k)<<endl;
return 0;
}