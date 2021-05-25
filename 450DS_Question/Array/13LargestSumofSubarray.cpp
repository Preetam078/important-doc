#include<bits/stdc++.h>
using namespace std;

int kadaneAlgo(int arr[], int n){
   
   int max = INT_MIN;
   int end = 0;
   for(int i=0; i<n; i++){
       end = end + arr[i];
       if(max<end){
           max = end;
       }
       if(end<0){
           end = 0;
       }
   }
   return max;
}

int main(){

int arr[]={1,2,3,-2,5};
int n = sizeof(arr)/sizeof(arr[0]);
cout<<"the largest sumArray is : "<<kadaneAlgo(arr, n)<<endl;
return 0;
}