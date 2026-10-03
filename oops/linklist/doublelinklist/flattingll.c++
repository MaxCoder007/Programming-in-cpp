 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* child;
    node (int data1){
        data=data1;
        next=nullptr; 
        child=nullptr;
    }
};
/*node* convert (vector<int> arr){
    node* head = new node(arr[0]);
    node* prev=head;
    vector<int> arr = 
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        prev ->next=temp;
        prev=temp;
    }
    return head;
 }*/
 void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        temp = temp->child;
    }
}
 node *flat(node *head){
    node *temp=head;
    vector <int> arr[20];

    while(temp!=nullptr){
        node *t1=temp;
        while(t1!=nullptr){
            arr->push_back(t1->data);
            t1=t1->child;
        }
        temp=temp->next;
    }
    // sort(arr);
    // convert(arr);
 }
node *merge2list(node *list1,node *list2){
    node *dummynode=new node(-1);
    node *list=dummynode;
    while(list1!=nullptr&&list2!=nullptr){
        if(list1->data<list2->data){
            list->child=list1;
            list1=list1->child;
            list=list->child;
          
        }
        else{
             list->child=list2;
            list2=list2->child;
            list=list->child;
            
        }
        list->next=nullptr;
    }
    if(list1!=nullptr){
        list->child=list1;
    }

    else{
        list->child=list2;
    }
    return dummynode->child;
}
node *function1(node *head)
{
    if(head==nullptr||head->next==nullptr){
        return head;
    }
   node *newhead=function1(head->next);
   return merge2list(head,newhead);
}
 int main()
{
    // vector<int> arr = {1, 2, 3, 1, 1, 4, 5};
    node *head=new node(1);
    head->next=new node(2);
    head->next->child=new node(3);
    head->next->child->next=new node(4);
    head->next->next=new node(4);
    head->next->next->next=new node(5);
    head->next->next->next->child=new node(6);
    head->next->next->next->child->next=new node(7);

    // node *head = convert(arr);
     node *head1= function1(head);
  print(head1);
}
 