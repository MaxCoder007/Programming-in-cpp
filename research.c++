#include <bits/stdc++.h>
using namespace std;
int fistocc(int arr[],int n,int i,int key){
    if(n==i){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
   return fistocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){

if(i==n){
    return -1;
}
int restarr=lastocc(arr,n,i+1,key);
if(restarr!=-1){
    return restarr;
}
if(arr[i]==key)
{
    return  i;
}
return-1;
 
}

int main(){
    int arr[]={3,2,1,1,2,4,3};
     cout<<fistocc(arr,6,0,2)<<endl;
    cout<<lastocc(arr,6,0,2)<<endl;
    
}