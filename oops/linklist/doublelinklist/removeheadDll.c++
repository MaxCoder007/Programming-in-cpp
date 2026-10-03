#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *next;
    node *back;
    int data;
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node *print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data;
        head = head->next;
    }
}
node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
node *deletehead(node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
node *deletetial(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        delete head;
        return NULL;
    }
    // temp->next = nullptr; // one line code is temp->back->next=nullptr;
    // prev->back = nullptr;
    temp->back->next=nullptr;
     delete temp;
    return head;
}
node* deletek(node* head,int k){
    if(head==NULL){
        return NULL;
    }
   if(head->next==NULL){
    if(k==1){
        return NULL ;
    } 
    else{
        return head;
    }
}
    node* temp=head;
    int count=0;
    while(temp!=NULL){
       count++;
    if(count==k){
      break;
    }
    temp=temp->next;
    }
    if(temp==NULL){
        return head;
    }
    if(temp->next==NULL){
        temp->back->next=NULL;
        delete temp;
        return head;
    }
    if(temp->next!=NULL){
    node* prev=temp->back;
    node* next=temp->next;
    prev->next=next;
    next->back=prev;    
    delete temp;
    return head;
    }
   
    return head;
}
void deletenode(node* temp){
     node* prev=temp->back;
     node* front=temp->next;
     if(temp->next==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        free(temp);
        return;
     }
     prev->next=front;
     front->back=prev;
     temp->next=temp->back=nullptr;
     free(temp);
    return;
}
node* insertposs(node* head,int k,int value){
    
    if(head==NULL){
        return NULL;
    }
   if(head->next==NULL){
    if(k==1){
        node* newnode=new node(value,head,nullptr);
        head->back=newnode;
    } 
    else{
        return head;
    }
}
    node* temp=head;
    int count=0;
    while(temp!=NULL){
       count++;
    if(count==k){
      break;
    }
    temp=temp->next;
    }
    if(temp==NULL){
        return head;
    }
    if(temp->next==NULL){
        node* newnode=new node(value,temp,temp->back);
        temp->back=newnode;
        temp->next=nullptr;
        return head;
    }
    if(temp->next!=NULL){
    node* prev=temp->back;
    node* newnode=new node(value,temp,temp->back);
    prev->next=newnode;
    temp->back=newnode;    
    return head;
    }
   
    return head;
     
}
void insertbeforenode(node* Node,int value){
    node* prev=Node->back;
    node* newnode=new node(value,Node,prev);
    prev->next=newnode;
    Node->back=newnode;
}
void insertbeforetail(node* head,int val){
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    node* prev=temp->back;
    node* newnode=new node(val,temp,prev);
    temp->back=newnode;
    prev->next=newnode;
    if(head->next==nullptr){
      insertposs(head,1,val);
    }
   
 }



int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = convert(arr);
    // head=deletehead(head);
    head = deletetial(head);
    //head = deletek(head,3);
    // deletenode(head->next);
    // insertbeforenode(head->next,100);
    // head=insertposs(head,1,100);
    print(head);
}