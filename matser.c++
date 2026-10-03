#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[10][10],n,m,key;
cout<<"Enter order of the matrix";
cin>>n>>m;
cout<<"Enter the matrix";
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
    cin>>mat[i][j];
}
}
int flag=false;
int tag;
cout<<"Enter target";
cin>>tag;
int r=0,c=m-1;
while(r<n&&c>=0){
    if(mat[r][c]==tag){
        flag=true;
        break;
    }
    else {
        if(mat[r][c]>tag){
        c--;
        }
        else{
            r++;
        }
}
    }

if(flag)
{
    cout<<"element found at"<<r+1<<c+1;
}
else{
    cout<<"Element not found";
}

}