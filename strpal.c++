#include<bits/stdc++.h>
using namespace std;


int main(){
int n;
cout<<"Enter requried number of letters";
cin>>n;
char arr[n+1];
cout<<"Enter a string";
cin>>arr;
bool check=1;
for(int i=0;arr[i]!='\0';i++){
    if(arr[i]!=arr[n-1-i]){
    check=0;
    break;
    }
}

if(check){
    cout<<"String is pallindrom";
}
else{
    cout<<"String is not a pallindrom";
}






}