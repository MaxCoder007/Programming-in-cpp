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
cout<<"Enter the key";
cin>>key;
int flag=0,i,j;
for( i=0;i<n;i++){
for( j=0;j<n;j++){
    if(mat[i][j]==key){
            cout<<"Element found at"<<i+1<<j+1;
        break;
        
    }
}

}

}