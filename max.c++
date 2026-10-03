#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main(){
    int n,arr[20],mx=-199999999;
        
      cout<<"Enter number of array elements";
      cin>>n;
      
      cout<<"Enter  array elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
    
    mx=max(mx,arr[i]);
    cout<<mx<<endl;
    }

}