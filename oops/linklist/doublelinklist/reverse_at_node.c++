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
    node(int data1, node *next1)
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
node *find(node *temp,int k){

    while(temp!=nullptr && k>1){
        temp=temp->next;
        k--;
    }
    return temp;
}
node *reverse(node *head){
    node *temp=head;
    if(temp->next==NULL){
        return temp;
    }
    node *newhead=reverse(head->next);
    node *front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;
}
node *reverse1(node *head,int k){
    node *temp=head;
    node *nextnode;
    node *prevnode;
    while(temp!=nullptr){
        node *kthnode=find(temp,k);
        if(kthnode==NULL){
            break;
        }
        nextnode=kthnode->next;
        kthnode->next=NULL;
        reverse(temp);
        if(head==temp){
            head=kthnode;
        }
        else{
            prevnode->next=kthnode;
        }
        prevnode=temp;
        temp=nextnode;
    }
    return head;
}
node *rotate(node *head,int k){
    node *temp=head;
    int  count=1;
    while(temp->next!=nullptr){
      
        temp=temp->next;
          count++;
        
    }
    if(k%count==0){
        return head;
    }
    k=k%count;
   node *nextnode=find(head,count-k);
   temp->next=head;
   head=nextnode->next;
  nextnode->next=nullptr;
  return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 4, 5};
    node *head = convert(arr);

    // head = deletekey(head, 1);
    // head =reverse1(head,3);
    head =rotate(head,2);
    print(head);
}