#include <bits/stdc++.h>
using namespace std;
int sum(int n){
if(n==0){
    return 0;

}
int pervis=sum(n-1);
int sum=n+pervis;
return sum;
}
int main(){
    int n=4;
    cin>>n;
    cout<<sum(n);
}