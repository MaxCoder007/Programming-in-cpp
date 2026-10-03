#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    node *next;
    node *back;
    int data;
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
node *print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data;
        head = head->next;
    }
}
node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
node* reverse(node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node* prev=NULL;
    node* current= head;
    while(current!=NULL){
        prev=current->back;
        current->back=current->next;
        current->next=prev;
        current=current->back;

    }
  
    return prev->back;
}

int main(){
    vector <int> arr={1,2,3,4,5};
    node* head=convert(arr);
    head=reverse(head);
    print(head);

}