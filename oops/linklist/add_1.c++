#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    node(int data1,node* next1)
    {
        data = data1;
        next = next1;
    }
};
node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(node *head)
{  
    while (head != nullptr)
    {
        cout << head->data;
        head = head->next;
    }
}
node* reverse(node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=reverse(head->next);
    node* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;

}
node* add1(node* head){
    head=reverse(head);
    node* temp=head;
    if(temp==NULL){
        return head;
    }
    int carry=1;
    while(temp!=NULL){
         temp->data+=carry;
         if(temp->data<10){
            carry=0;
            
           break;
         }
         else{
            temp->data=0;
            carry=1;
         }
         temp->data=0;
         temp=temp->next;
         
    }
   
    if(carry){
        node* newnode=new node(carry);
        head=reverse(head);
        newnode->next=head;
        return newnode;
    }
     head=reverse(head);
    return head;
}
int  helper(node* temp){
    if(temp==NULL){
        return 1;
    }
    int carry=helper(temp->next);
      temp->data=temp->data+carry;
      if(temp->data<10){
        return 0;
      }
        temp->data=0;
        return 1;
}
node* function1(node* head){
    node* temp=head;
    int  carry=helper(head);
    if(carry==1){
        node* newnode=new node(1);
        newnode->next=head;
        return newnode;
    }
    return head;
}
int main(){
    vector <int> arr={9,9,9,9,9};
    node* head=convert(arr);
    //    head=add1(head);
       head=function1(head);
   print(head);
}
