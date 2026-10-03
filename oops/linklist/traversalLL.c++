#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
  
    node* next;
    node (int data1){
        data=data1;
        next=nullptr; 
    }
};
node* convert (vector<int> arr){
    node* head = new node(arr[0]);
    node* prev=head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        prev ->next=temp;
        prev=temp;
    }
    return head;
 }
 int check(int n,node* head){
    node* temp=head;
    while(temp){
        
    if(temp->data==n){
        return 1;
    }
    temp=temp->next;
    
 }
 return 0;
 }
int main (){
   
    vector<int> arr={1,2,3,4,5};
    int count=0;
    node* head=convert(arr);
    cout<<check(1,head)<<endl;
    node* temp=head;
   
    while(temp!=nullptr){
         cout<<temp->data;
         temp=temp->next;
         count++;// to get the size of the linked list
    }
  cout<<" "<<count;
}