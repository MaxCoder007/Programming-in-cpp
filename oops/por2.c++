// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
#include<iostream>
using namespace std;
class binary{
    private:
    string s;
    public:
    void getdata(){
        cout<<"Enter a binary number";
        cin>>s;
    }
    void check(void);
    void ones(){
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                s[i]='1';
            }
            else{
                s[i]='0';
            }
        }
        cout<<"ones compliment is"<<s<<endl;
    }
    void out(void){
        cout<<"Final binary number"<<s;
    }

};
void binary :: check(void){
    for(int i=0;i<s.length();i++){
        if(s[i]!='0'&& s[i]!='1'){
            cout<<"It is not a binary number"<<endl;
            exit (0);

        }
    }
};

int main(){
 binary b;
 b.getdata();
 b.ones();
 b.check();
 b.out();
}
