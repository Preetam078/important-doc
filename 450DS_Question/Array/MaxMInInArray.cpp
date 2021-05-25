//LINEAR METHOD

#include<bits/stdc++.h>
using namespace std;
 
class MaxMin{
    int minimum,maximum;
    public:
    void getMaxmin(int arr[], int size){
       if(size==1){
           minimum = arr[0];
           maximum = arr[0];
       }
       else{
           if(arr[0]>arr[1]){
               maximum = arr[0];
               minimum = arr[1];
           }
           else{
               maximum = arr[1];
               minimum = arr[0];
           }
           for(int i=2;i<size;i++){
               maximum = max(maximum,arr[i]);
               minimum = min(minimum,arr[i]);

           }
       }
    }
    void display(){
        cout<<"maximum :"<<maximum<<endl 
            <<"minimum :"<<minimum<<endl; 
    }

};
int main(){ 
    MaxMin obj;
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    obj.getMaxmin(arr, n);
    obj.display();
    
return 0;
}


