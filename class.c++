#include<bits/stdc++.h>
using namespace std;

class simplecals{
     int a,b;
     public:

     void getdatasimple(){
        cout<<"Enter the value of a";
        cin>>a;
        
        cout<<"Enter the value of b";
        cin>>b;
     }
     void perfomsimple(){
        cout<<"a+b="<<a+b<<endl;
        cout<<"a-b="<<a-b<<endl;
        cout<<"a*b="<<a*b<<endl;
        cout<<"a/b="<<a/b<<endl;
     }

};
class sentificals{
    int a,b;
    public:

    void getdatasenti(){
       cout<<"Enter the value of a";
       cin>>a;
       
       cout<<"Enter the value of b";
       cin>>b;
    }
    void perfomsenti(){
        cout<<"sin(a)="<<sin(a)<<endl;
        cout<<"cos(b)="<<cos(b)<<endl;
        cout<<"exp(a)="<<exp(a)<<endl;
        cout<<"tan(a*b)="<<tan(a*b)<<endl;
     }
};

class hybridcalcs : public  simplecals,public sentificals{

};

int main(){
   hybridcalcs clas;
   clas.getdatasenti();
   clas.perfomsenti();
   clas.getdatasimple();
   clas.perfomsimple();
   

}