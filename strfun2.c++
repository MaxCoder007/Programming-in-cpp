#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string str1="hello";
    string str2="world";
    // str1.append(str2);
    str1=str1+str2;
    cout<<str1<<endl;
    cout<<str1[2]<<endl;//to exess the 3rd character
    str1.clear();//to clear the str1
    str1="fuck";
    cout<<str1<<endl;
}