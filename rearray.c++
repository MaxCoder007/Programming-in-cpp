#include <bits/stdc++.h>
using namespace std;
bool arra(int arr[],int n){
     if(n==0){
        return 1;
     }
    int perv=arra(arr+1,n-1);
   
    int a=(arr[0]<arr[1]&&perv);
    return a;
}
int main(){
    int arr[5]={1,2,3,4,5};
   cout<< arra(arr,5);
}