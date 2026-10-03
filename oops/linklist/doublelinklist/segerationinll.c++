#include <bits/stdc++.h>
using namespace std;

class node
{
public:

    node *next;
    int data;
public:
    node(int data1, node *head1)
    {
        data = data1;
        next= head1;
    }
    node(int data1)
    {
        data = data1;
        next=NULL;
    }
};
void print(node *head)
{

    while (head != NULL)
    {
        cout << head->data<<" ";
        head = head->next;
    }
}
node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}
node* segerate(node* head){
    node* temp=head;
    if(temp==NULL||temp->next==NULL){
        return temp;
    }
    vector<int> arr;
    while(temp!=NULL&&temp->next!=NULL){
       arr.push_back(temp->data);
       temp=temp->next->next;
    }
    if(temp){
        arr.push_back(temp->data);
    }
   
    temp=head->next;
    while(temp!=NULL&&temp->next!=NULL){
       arr.push_back(temp->data);
       temp=temp->next->next;
    }
     if(temp){
        arr.push_back(temp->data);
    }
    temp=head;
    int i=0;
    while(temp!=NULL&&i<arr.size()){
        temp->data=arr[i];
        i++;
        temp=temp->next;
    }

    return head;
}
node* segerate2(node* head){
    node* odd=head;
    node* even=head->next;
    node* evenhead=head->next;
    while(even->next!=NULL&&even!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next->next;
    }
     odd->next=evenhead;
     return head;
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
     node* head=convert(arr);
     print(head);
     head =segerate2(head);
        cout<<"After segeration: ";
     print(head);

}