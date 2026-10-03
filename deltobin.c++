#include<bits/stdc++.h>
using namespace std;
int dectobin(int n){
    int rem,ans=0,pow=1;

    while(n>0){
        rem=n%2;
        ans+=rem*pow;
        n=n/2;
        pow*=10;
    }return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dectobin(n);

}

