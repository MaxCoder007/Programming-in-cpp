#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z)
{

    int a=max(x,max(y,z)),b,c;
if(a==x){
b=y;
c=z;
}
if(a==y){
b=x;
c=z;
}
if(a==z){
b=x;
c=y;
}
if(a*a==b*b+c*c){
    return 1;
}
else{
    return 0;
}
}
int main(){

    int x ,y ,z;
cout<<"Enter three numbers";
cin>>x>>y>>z;


bool v=check(x,y,z);
if(v){
    cout<<"pythogorien triplet"<<endl;
}
else{
    cout<<" not a pythogorien triplet"<<endl;
}

}