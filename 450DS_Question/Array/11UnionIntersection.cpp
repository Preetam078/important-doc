//union and intersection of two sorted array
#include<bits/stdc++.h>
using namespace std;

int Union(int a[],int b[],int n, int m){
    int count = 0;
    // for(int i=0;i<n;i++){
    //     count++;
    // }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){          //Intersection
                count++;
            }
        }
    }
   return count;
}
void Intersection(int a[], int b[], int n, int m){

}

int main(){
 
     int a[]={1, 2, 3, 4, 5};
     int b[]={1,2,3};

     int n = sizeof(a)/sizeof(a[0]);
     int m = sizeof(b)/sizeof(b[0]);

    cout<<"the union is : "<<Union(a,b,n,m)<<endl;
    Intersection(a,b,n,m);

return 0;
}
