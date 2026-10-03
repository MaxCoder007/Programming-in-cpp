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
node *print(node *head)
{
    while (head != nullptr)
    {
        cout << head->data;
        head = head->next;
    }
}
node *deletetial(node *head)
{
    node *temp = head;
    if (temp->next == NULL || temp == NULL)
    {
        return NULL;
    }

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = convert(arr);
    head = deletetial(head);
    print(head);
}