// #include<iostream>
// using namespace std;

// void reArrange(int arr[],int n){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             swap(arr[i],arr[j]);
//             j++;
//         }
//     }
//     cout<<"Rearranged array is : ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }     
//     cout<<endl;
// }


// int main(){
//    int arr[] = {-1, 2, -3, 4, 5, 6, -7, 8, 9 };
//    int n = sizeof(arr)/sizeof(arr[0]);
//    reArrange(arr,n);
   
// return 0;
// }

//TWO POINTER METHOD 
#include<iostream>
using namespace std;

void getReturn(int arr[],int size){
    int left = 0;
    int right = size-1;
    while(left<=right){
       if(arr[left]<0 && arr[right]<0){
           left++;
       }
       if(arr[left]>=0 && arr[right]<0){
           swap(arr[left],arr[right]);
           left++;
       }
       if(arr[left]<0 && arr[right]>0){
           right--;
           left--;
       }
       if(arr[left]>0 && arr[right]>0){
           right--;
       }
    }
    cout<<"rearranged array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int arr[]={-1, 2, -3, 4, 5, 6, -7, 8, 9 };
int n = sizeof(arr)/sizeof(arr[0]);
getReturn(arr,n);
return 0;
}