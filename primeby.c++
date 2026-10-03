#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,j;
    cout<<"Enter two  number=";
    cin>>a>>b;
int flag=0;
    for(int i=a;i<=b;i++)
    {
        for(j=2;j<=i;j++)
        {
        if(i%j==0)
        {
          break;
        }
     
        }
        if(i==j){
            cout<<i<<endl;
        }
    }
}