// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//    string str = "gfg";
//    bool val = next_permutation(str.begin(),str.end());
//    if(val == false){
//        cout<<"next permutation not possible "<<endl;
//    }
//    else {
//        cout<<str<<endl;
//    }
// return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,2,7,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=n-2;
    while(i>=0){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[n-1]);
        }
           i--;
       
    }

    for(int j=0;j<n;j++){
        cout<<arr[j];
    }
    cout<<endl;
    
return 0;
}