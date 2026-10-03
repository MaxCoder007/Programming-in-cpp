#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[20],j;
    cout<<"Enter number of elements";
    cin>>n;
      cout<<"Enter array elements";
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int i=0;i<n;i++){
        int sum=0;
        for( j=i;j<n;j++)
        {
          sum+=arr[j];
          cout<<sum; 
           
        }
      cout<<" ";
     
           
      }
      }
