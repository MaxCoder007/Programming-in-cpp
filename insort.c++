#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[10],pos,num;
    cout<<"Enter number of elements";
    cin>>n;
    cout<<"Enter array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    cout<<"Enter element to be replaced=";
    cin>>num;
for(int j=0;j<n;j++){
    if(arr[j]>num){
   pos=j;
   break;
    }
}
 for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
         
 }
    arr[pos]=num;
n++;
     cout<<"final array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}