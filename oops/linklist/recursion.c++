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
node* reverse(node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* newhead=reverse(head->next);
    node* front=head->next;
    front->next=head;
    head->next=NULL;
    return newhead;

}

int main(){
    vector <int> arr={1,2,3,4,5};
    node* head=convert(arr);
   head=reverse(head);
   print(head);
}