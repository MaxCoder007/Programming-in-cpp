#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter a number=";
    cin>>n;
    int  q,rn=0;
    while(n>0){
        q=n%10;
        rn=rn*10+q;
        n=n/10;
    }
    cout<<rn;
    return 0;
}