#include <bits/stdc++.h>
using namespace std;
int getbit(int n ,int poss){
    return((n|(1<<poss)));
}
int main(){
    cout<<getbit(5,1);
}