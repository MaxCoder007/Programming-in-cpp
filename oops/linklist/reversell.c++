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
node *reverse(node *head)
{
    stack<int> st;
    node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}
node *reverse1(node *head)
{
    node *temp = head;
    node *prev = nullptr;
    node *front;
    while (temp != NULL)
    {
        front = temp->next;
        front->next = temp;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}
node *dummy(node *head)
{
    node *temp = head;
    node *dummy0 = new node(0);
    node *dummy1 = new node(1);
    node *dummy2 = new node(2);
    node* temp1=dummy1;
    node* temp2=dummy2;
    node* temp0=dummy0;
    while (temp != nullptr)
    {
        if (temp->data == 0)
        {
            temp0->next = temp;
            temp0 = temp0->next;
        }
        else
        {
            if (temp->data == 1)
            {
                temp1->next = temp;
                temp1 = temp1->next;
            }
            else
             {
                temp2->next = temp;
                temp2=temp2->next;
            }
        }
        temp=temp->next;
    }
   
    temp0->next=(dummy1->next)?dummy1->next:dummy2->next;
    temp1->next=dummy2->next;
    temp2->next=nullptr;
    head=dummy0->next;
    delete(dummy0);
    delete(dummy1);
    delete(dummy2);
  return head;
}
int main()
{
    vector<int> arr = {0,1,0,0,2,1,2,1,};
    node *head = convert(arr);
    // head=reverse(head);
    //head = reverse1(head);
    head=dummy(head);
    print(head);
}