#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(int n);
int main(){
    int n;
    cin>>n;
    cout<<binarytodecimal(n);
}
int binarytodecimal(int n){
    int x=2,y,ans=0,m=0;
while(n>0){
    y=n%10;
   ans+=y*pow(x,m);
   m++;
   n=n/10;
}
return(ans);
}
