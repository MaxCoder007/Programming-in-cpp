#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    string s1="hemanth";
    s1.insert(7,"g");
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    for(int i=0;i<s1.size();i++){
        cout<<s1[i]<<endl;
    
    }
    cout<<s1.find("h")<<endl;
    string s2=s1.substr(5,1);                   
    cout<<s2<<endl;
}