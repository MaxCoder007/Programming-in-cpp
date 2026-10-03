#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=10;
    int *ptr=&a;
     cout<<a<<endl;
    *ptr=20;
    cout<<a<<endl;
    cout<<&a<<endl;
    ptr++;
    cout<<ptr<<endl;

}