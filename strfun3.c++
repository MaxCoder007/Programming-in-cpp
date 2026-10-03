#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string str1="hello";
    string str2="world";
    cout<<str2.compare(str1)<<endl;
    cout<<str1.compare(str2)<<endl;

    //  if(str2.compare(str1)==0)
     if(!str2.compare(str1)){
        cout<<"String are same"<<endl;

     }
     else{
        cout<<"strings are different"<<endl;
     }
}