#include<bits/stdc++.h>
using namespace std;
int count(int arr[],int n){
    int inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cout<<arr[i]<<arr[j]<<" ";
                inv++;
            }
        }
    }
  cout<<inv;
}
int main(){
    int arr[]={1,3,4,7,5,6,2};
    count(arr,7);
}