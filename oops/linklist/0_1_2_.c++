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
node *replace(node *head)
{
    node *temp = head;
    node *zerohead = new node(-1);
    node *zero = zerohead;
    node *onehead = new node(-1);
    node *one = onehead;
    node *twohead = new node(-1);
    node *two = twohead;
    while (temp != NULL)
    {
        if (temp->data==0)
        {
            zero->next = temp;
            zero = zero->next;
        }
        else
        {
            if (temp->data == 1)
            {
                one->next = temp;
                one = one->next;
            }
            else
            {
                two->next = temp;
                two = two->next;
            }
        }
        temp=temp->next;
    }
    zero->next = (onehead->next)? ( onehead->next ): (twohead->next);
    one->next = twohead->next;
    two->next = nullptr;
    node *newhead = zerohead->next;
    delete(zerohead);
    delete(onehead);
    delete(twohead);
    return newhead;
}
node* replace1(node*head){
    node* temp=head;
    int count1=0;
    int count0=0;
    int count2=-0;
    while(temp!=NULL){
         if (temp->data==0)
        {
            count0++;
           temp= temp->next;

        }
        else
        {
            if (temp->data == 1)
            {
               count1++;
           temp= temp->next;
            }
            else
            {
               count2++;
           temp= temp->next;
            }
        }
    }
    temp=head;
    while(temp!=NULL){
           if (count0!=0)
        {
            temp->data=0;
            count0--;
              

        }
        else
        {
            if (count1!=0)
            {
              temp->data=1;
            count1--;
              
            }
            else
            {
             temp->data=2;
            count2--;
            
            }
        }
          temp= temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {0, 0, 1, 2, 1, 2, 0};
    node *head = convert(arr);
   // head = replace(head);
    head = replace1(head);
    print(head);
}