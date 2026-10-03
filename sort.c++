#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[20];
    cout<<"Enter number of array elements";
    cin>>n;
    cout<<"Enter array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    while(count<n){
        for(int i=0;i<n-count;i++){
         if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
         }
        
        }
        count++;
    }
      cout<<"sorted array elements";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}