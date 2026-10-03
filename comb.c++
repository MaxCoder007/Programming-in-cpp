#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int factorial=1;
    for(int i=2;i<=n;i++)          
    {
        factorial*=i;
    }return factorial;
}



int main(){
int n,r;
cout<<"Enter the value of n and r=";//n=Number of items in set
cin>>n>>r;//n=Number of selected from the set
int ans=fact(n)/(fact(n-r)*fact(r));
cout<<ans<<endl;
}