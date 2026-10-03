#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5,arr[20]={4,5,6,7,3};
    
        for(int i=0;i<n;i++){
            int current=arr[i];
         int j=i-1;
         while(arr[j]>current&&j>=0){
           arr[j+1]=arr[j];
           j--;
         }
          arr[j+1]=current;
        }
      
    
      cout<<"sorted array elements";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}