#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[20];

     cout<<"Enter number of elements";
    cin>>n;
      cout<<"Enter array elements";
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      for(int str=0;str<n;str++){
        for(int end=str;end<n;end++){
            for(int i=str;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
      }
      }