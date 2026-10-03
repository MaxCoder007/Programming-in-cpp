#include<bits/stdc++.h>

#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number=";
    cin>>n;
int flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if(flag){
        cout<<"not a prime number"<<endl;
    }
    else{
        cout<<"prime number"<<endl;
    }
    return 1;
}