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
node* deletenode(node*head,int n){
      node* temp=head;
      int count=0;
      while(temp!=NULL){
       count++;
       temp=temp->next;
      }
      int res=count-n;
      temp=head;
      while(temp!=NULL){
        if(count==n){
            node* newhead=head->next;
            free(head);
            return newhead;
        }
        if(res==0){
           node* newnode=temp->next;
           temp->next=temp->next->next;
           free(newnode);
           return head;
        }
        res--;
        temp=temp->next;
      }
     
}
node* deletenode1(node*head,int n){
    node* fast=head;
    for(int i=0;i<n;i++){
      fast=fast->next;
      if(fast==NULL){
     return head=head->next;
            free(head);
    

}
    }
    node* slow=head;
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }

    node* delnode=slow->next;
    slow->next=slow->next->next;
    free(delnode);
    return head;
}
int main(){
    vector <int> arr={1,2,3,4,5};
      node* head =convert(arr);
    //  head=deletenode(head,3);
      head=deletenode1(head,5);
      print(head);
   
}