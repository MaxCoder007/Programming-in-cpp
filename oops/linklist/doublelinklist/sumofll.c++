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

node* sum(node* head1,node* head2){
    node* t1=head1;
    node* t2=head2;
   node* dummy=new node(0);
   int carry=0;

   node* curr=dummy;


    while(t1!=NULL||t2!=NULL){
       int sum=carry;
        if(t1){
            sum=sum+t1->data;
             t1=t1->next;
        }
        if(t2){
            sum=sum+t2->data;
             t2=t2->next;
        }
        node* newnode= new node(sum%10);
        carry=sum/10;
        curr->next= newnode;
        curr=curr->next;

    }
    if(carry!=0){
        node* newnode= new node(carry);
        curr->next=newnode;
    }
    return dummy->next;

}

int main(){
    vector<int> arr1={2,3,1,2,3};
    vector<int> arr2={10,3,1,2,13};
    node* head1=convert(arr1);
    node* head2=convert(arr2);
    node* headsum=sum(head1,head2);
    print(headsum);
}