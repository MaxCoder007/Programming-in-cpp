#include<bits/stdc++.h>
using namespace std;

int dectooct(int n){
    int rem,ans=0,pow=1;

    while(n>0){
        rem=n%8;
        ans+=rem*pow;
        n=n/8;
        pow*=10;
    }return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<dectooct(n);

}

