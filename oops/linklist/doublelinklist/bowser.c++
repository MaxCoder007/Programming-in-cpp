 #include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class node {
      public:
      string data;
      node *next;
      node *back;
      node (string x){
        data=x;
        next=nullptr;
        back=nullptr;
      }
         node (string x,node *next1,node *back1){
        data=x;
        next=next1;
        back=back1;
      }
};

class bowser{
    public:
    string homepage;
   node *current=new node (homepage);
    // bowser (string homepage){
    //         current=new node(homepage);
    // }
    void create(string X){
    node *newnode=new node(X);
    current->next=newnode;
    newnode->back=current;
    current=current->next;
}
void front(int steps){
    while(steps){
        if(current->next){
            current=current->next;
        }
        else
        {
            break;
        }
        steps--;
    }
    // return current;
}
void back(int steps){
    while(steps){
        if(current->back){
            current=current->back;
        }
        else
        {
            break;
        }
        steps--;
    }
    
}
void show(){
    cout<<current->data<<endl;
}
}b;
int main(){
     b.create("youtube.com");
     b.show();
     b.create("instgram.com");
     b.show();
     b.create("xhamster.com");
     b.show();
    b.back(1);
    b.show();
    b.front(1);
    b.show();

}
