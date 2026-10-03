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
void deleteM(node *slow)
{
    node *middle = slow->next;
    slow->next = slow->next->next;
    free(middle);
}
node *middlenode(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    node *slow = head;
    node *fast = head;
    fast = fast->next->next;
    while (fast != nullptr && fast->next != nullptr)
    { // while (fast->next != nullptr && fast != nullptr)and fast is already nullptr,
        // then fast->next is evaluated first, which results in a segmentation fault (crash),
        //  because you're trying to dereference a nullptr.
        slow = slow->next;
        fast = fast->next->next;
    }
    deleteM(slow);
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *head = convert(arr);
    node *middle = middlenode(head);
    print(head);
}
