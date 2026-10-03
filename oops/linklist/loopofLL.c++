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
int length(node* slow){
     int count=1;
     node* temp=slow->next;
          while(slow!=temp){
            count++;
            temp=temp->next;
          }

          return count;
      
}

int loop(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return 0 ;
    }

    node *slow = head;
    node *fast = head;
    fast = fast->next->next;
   

    while (fast != nullptr && fast->next != nullptr)
    { 
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
             return length(slow);
        }
       
    }
   return 0;
}
int lengthmapp(node*head){
    map <node*,int> mpp;
    int timer=1;
    node* temp=head;
    int value;
    while (temp!=NULL)
    {
        if(mpp.find(temp)!=mpp.end()){
           
            return timer- mpp[temp];;

        }
        mpp[temp]=timer;
        timer++;
        temp=temp->next;
    }
    
}
node* loopstart(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return 0 ;
    }

    node *slow = head;
    node *fast = head;
  

    while (fast != nullptr && fast->next != nullptr)
    { 
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
           slow=head;
           while ((slow!=fast))
           {
            slow=slow->next;
            fast=fast->next;
           }
           return slow;
        }
       
    }
   return NULL;
}
int main()
{
    // vector<int> arr = {1, 2, 3, 4, 5, 6};
    // node *head = convert(arr);
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(2);
    head->next->next->next=new node(3);
    head->next->next->next->next=new node(4);
    head->next->next->next->next->next=head->next;
//    cout<<loop(head)<<endl;
   cout<<loopstart(head)->data<<endl;
//    cout<<lengthmapp(head)<<endl;
}