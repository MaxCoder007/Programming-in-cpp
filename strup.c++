#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s1={"fasGRYftvcd"};

    // for(int i=0;i<s1.size();i++){
    //     if(s1[i]>='a'&&s1[i]<='z'){
    //         s1[i]-=32;
    //     }
    // }
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);//transform(1st character,last character,from where to convert,type)
    cout<<"Upper case string="<<s1<<endl;
    // for(int i=0;i<s1.size();i++){
    //     if(s1[i]>='A'&&s1[i]<='Z'){
    //         s1[i]+=32;
    //     }
    // }
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);//transform(1st character,last character,from where to convert,type)
    cout<<"Lower case string="<<s1<<endl;
}