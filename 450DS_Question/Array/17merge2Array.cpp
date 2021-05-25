#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n, int m){
    int merge[n+m];
    for(int i=0;i<n;i++){
        int val = arr1[i];
        for(int j=i;j<n;j++){
            merge[j]=val;
        }
    }
      for(int i=0;i<m;i++){
        int val2 = arr2[i];
        for(int j=n+i;j<n+m;j++){
            merge[j]=val2;
        }
    }
    sort(merge, merge+(n+m));
    cout<<"the merge array is : "<<endl;
    for(int i=0;i<n+m;i++){
        cout<<merge[i]<<" ";
    }
   cout<<endl;
}

int main(){
  int arr1[]={10,12};
  int n = sizeof(arr1)/sizeof(arr1[0]);
  int arr2[]={5,18,20};
  int m = sizeof(arr2)/sizeof(arr2[0]);
  mergeArrays(arr1, arr2, n, m);
return 0;
}