#include <bits/stdc++.h>
using namespace std;
int poweroftwo(int n){
    return(n&&!(n&n-1));
}
int main(){
    cout<<poweroftwo(0);
}