#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=7;
    int *ptr=&a;
    int **aptr=&ptr;

    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*aptr<<endl;
    cout<<**aptr<<endl;
}