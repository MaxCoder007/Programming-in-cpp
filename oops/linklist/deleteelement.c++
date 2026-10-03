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

node* deletek(node* head,int k){
     node* temp=head;
     if(head==NULL){
       return NULL;
     }
     if(k==1){
        head=head->next;
        free(temp);
        return head;

     }
     int count=0;
     node* prev=NULL;
     while(temp!=nullptr){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;

     }
     return head;
}
node* inserthead(node* head,int n){
    node* newnode=new node(n);
    newnode->next=head;
    head=newnode;
    return head;
}
node* insertend(node* head,int n){
    node* newnode=new node(n);
    if(head==NULL){
        return newnode;
    }
node* temp=head;
while(temp->next!=NULL){
   temp=temp->next;
}
temp->next=newnode;
newnode->next=nullptr;
return head;
}
// node* insertk(node* head, int pos, int val) {
//     node* newnode = new node(val);
    
//     if (pos == 1) {
//         newnode->next = head;
//         return newnode;
//     }

//     node* temp = head;
//     int count = 1;

//     while (temp != NULL && count < pos - 1) {
//         temp = temp->next;
//         count++;
//     }

//     if (temp == NULL) {
//         cout << "Position out of bounds" << endl;
//         return head;
//     }

//     newnode->next = temp->next;
//     temp->next = newnode;
//     return head;
// }
node* insertk(node* head, int pos, int val){
    if(head==NULL){
        if(pos==1){
            node* temp=new node(val,head);
            return temp;
        }
        else{
            return NULL;
        }
    }
    if(pos==1){
        node* temp=new node(val,head);
            return temp;
        }
    
    int count=0;
    node* temp=head;
   while(temp!=NULL){
       count++;
       if(count==pos-1){
        node* n=new node(val);
        n->next=temp->next;
        temp->next=n;
        return head;
   }
   temp=temp->next;
   }
    return head;

    
}
int main(){
    vector <int> arr={1,2,3,4,5};
    node* head =convert(arr);
    // head=deletek(head,2);
    // head=inserthead(head,100);
    // head=insertend(head,100);
    head=insertk(head,2,100);
     print(head);
}