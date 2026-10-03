#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
     void setdata(int a1,int b1){
        a=a1;
        b=b1;
     }
     void setdatasum(complex c1,complex c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;
     }
     void getdata(void){
        cout<<"The final complex numberis"<<a<<"+"<<b<<"i"<<endl;
     }
};
int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.getdata();
    
    c2.setdata(2,3);
    c2.getdata();
     
    c3.setdatasum(c1,c2);
    c3.getdata();


}