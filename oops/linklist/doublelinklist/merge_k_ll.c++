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
        cout <<" "<<temp->data;
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
node *merge2list(node *list1, node *list2)
{
    node *dummynode = new node(-1);
    node *list = dummynode;
    while (list1 != nullptr && list2 != nullptr)
    {
        if (list1->data ==list2->data)
        {
            list->next = list1;
            list1 = list1->next;
            list2 = list2->next;
            list = list->next;
        }
        else
        {
            if (list1->data < list2->data)
            {
                list->next = list1;
                list1 = list1->next;
                list = list->next;
            }
            else
            {
                list->next = list2;
                list2 = list2->next;
                list = list->next;
            }
        }
        
    }
    if (list1 != nullptr)
    {
        list->next = list1;
    }

    else
    {
        list->next = list2;
    }
    return dummynode->next;
}
node *function1(list<node *> lists)
{
    node *head = lists.front();
    lists.pop_front();
    for (auto it : lists)
    {
        head = merge2list(head, it);
    }
    return head;
}
int main()
{
    list<node *> lists;
    vector<int> arr = {1, 2, 3, 5};
    lists.push_front(convert(arr));
    vector<int> arr1 = { 45, 61 };
    lists.push_front(convert(arr1));
    vector<int> arr2 = {0, 8, 9};
    lists.push_front(convert(arr2));
    node *head = function1(lists);

    print(head);
}