#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
string s={"hemant"};
sort(s.begin(),s.end(),less<int>());//to arrange in increasing order use greater in the place of less
//sort(s.begin(),s.end(),[](char a,char b){return a>b;});

cout<<s<<endl;

}