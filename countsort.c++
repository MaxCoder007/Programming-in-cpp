#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int count(int arr[],int n){
    int k=0;
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
    }
    int coun[8]={0};
    for(int i=0;i<n;i++){
        coun[arr[i]]++;
    }

    for(int i=1;i<=k;i++){
        coun[i]=coun[i]+coun[i-1];
    }
    int b[8]={0};
    for(int i=n-1;i>=0;i--){
       b[--coun[arr[i]]]=arr[i];
    }
 for(int i=0;i<n;i++){
    arr[i]=b[i];
 }
 return 0;
}

int main(){
    int arr[]={2,3,2,4,1,5,6,1};

    count(arr,8);
    for(int i=0;i<8;i++)
{
    cout<<arr[i]<<" ";
}
}