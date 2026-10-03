#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans;
if(n==1){
        return 1;
}
    ans=n*fact(n-1);
    return ans;
}



int fact(int n);
int main(){
    int n;
    cin>>n;
     cout<<fact(n);
}