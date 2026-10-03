#include <bits/stdc++.h>
using namespace std;
void tower(int n,char str,char dis,char help){
    if(n==0){
        return;
    }
    tower(n-1,str,help,dis);
    cout<<"Move from"<<str<<"to"<<dis<<endl;
    tower(n-1,help,dis,str);
}


int main(){
    tower(3,'A','c','B');//(start,dis,helper)

}