#include<bits/stdc++.h>
using namespace std;
int pervious(int arr[],int low,int high){
    int i,j,pivot=0;
    i=low;
    j=high;
    pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot&&i<=high){
            i++;
        }
        while(arr[j]>pivot&&j>=low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[low],arr[j]);
    return j;
    
}
int quick(int arr[],int low,int high){
  if(low<high)
    {int per=pervious(arr,low,high);
    quick(arr,low,per-1);
    quick(arr,per+1,high);
}
}

int main(){
    int arr[]={3,4,2,1,5,6,7,8};
    int low=0,high=7;
    quick(arr,low,high);
    for(int i=0;i<=7;i++){
        cout<<arr[i];
    }
}