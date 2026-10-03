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
node *findmiddle(node *head){
    node *slow=head;
    node *fast=head->next;
    while(fast!=nullptr&&fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node *merge2list(node *list1, node *list2)
{
    node *dummynode = new node(-1);
    node *list = dummynode;
    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->data ==list2->data)
        {
            list->next = list1;
            list1 = list1->next;
            list2 = list2->next;
            list = list->next;
        }
        else
        {
            if (list1->data < list2->data)
            {
                list->next = list1;
                list1 = list1->next;
                list = list->next;
            }
            else
            {
                list->next = list2;
                list2 = list2->next;
                list = list->next;
            }
        }
        
    }
    if (list1 != nullptr)
    {
        list->next = list1;
    }

    else
    {
        list->next = list2;
    }
    return dummynode->next;
}
node *merge(node *head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
    node *middlenode=findmiddle(head);
    node *left=head;
    node *right=middlenode->next;
    middlenode->next=nullptr;
   left= merge(left);
   right= merge(right);
    return merge2list(left,right);

}

int main(){
    vector<int> arr={1,2,4,3,5,6};
     node* head=convert(arr);
         head =merge(head);     
     print(head);

}