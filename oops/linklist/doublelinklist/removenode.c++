#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *next;
    node *prev;
    int data;

    node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
    node(int data1, node *next1, node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};
void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        temp = temp->next;
    }
}

node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, mover);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

node *deletekey(node *head, int key)
{
    node *temp = head;
    node *nextnode;
    node *prevnode;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            if (temp == head)
            {
                head = head->next;
            }
            nextnode = temp->next;
            prevnode = temp->prev;
            if (prevnode)
            {
                prevnode->next = nextnode;
            }
            if (nextnode)
            {
                nextnode->prev = prevnode;
            }
            free(temp);
            temp = nextnode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}
node *deleteduplicate(node *head){
    node *temp=head;
    node *nextnode;
    while(temp!=NULL){
        nextnode=temp->next;
        while(nextnode!=NULL&&nextnode->data==temp->data){
            node *duplicate= nextnode;
            nextnode=nextnode->next;
            free(duplicate);
        }
        temp->next=nextnode;
        deletekey(nextnode,temp->data);
        temp=temp->next;

    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 4, 5};
    node *head = convert(arr);

    // head = deletekey(head, 1);
    head = deleteduplicate(head);
    print(head);
}