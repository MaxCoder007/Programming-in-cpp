#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:

    void setdata(void){
        cout<<"Enter the id";
        cin>>id;
        count ++;
    }
    void getdata(void){
        cout<<"This is the id of the employee "<<id<<" and this is employee number "<<count<<endl;
    
    }
    static void getcount(void){
        cout<<"This is the count"<<count;
    }
};
// Count is the static data member of class Employee
int employee::count; // Default value is 0

int main(){
    employee a,b,c;

    a.setdata();
    a.getdata();
    a.getcount();

    b.setdata();
    b.getdata();
    b.getcount();

    c.setdata();
    c.getdata();
    c.getcount();

    return 0;
}