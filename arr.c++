
#include<iostream>
#include<climits>

using namespace std;
int main(){
    int arr[5];
for(int i=0;i<5;i++)
{
    cin>>arr[i];
}
int maxno=INT_MIN;
int mimno=INT_MAX;
for(int i=0;i<5;i++)
{
    if(arr[i]<mimno)
    {
        mimno=arr[i];
    }
    if(arr[i]>maxno){
        maxno=arr[i];
    }
}
cout<<maxno<<"\n"<<mimno;
}