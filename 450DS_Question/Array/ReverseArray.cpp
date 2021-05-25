#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    arr[start]=arr[start]+arr[end]-arr[start];
    arr[end]=arr[start]+arr[end]-arr[end];
    
    reverseArray(arr, start+1, end-1);
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
	int arr[]={1,2,3,4,5,6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array before reversing "<<endl;
	printArray(arr,n);
	reverseArray(arr, 0,n-1);
	cout<<"Array after reverse  "<<endl;
	printArray(arr,n);
	cout<<endl;
	return 0;
}