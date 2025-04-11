#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int x)
    {
        this->val = x;
        this->next = nullptr;
    }
};

void PrintList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " at -> " << head << " next -> " << head->next << endl;
        head = head->next;
    }
}

void AddToHead(int n, ListNode *&head)
{
    ListNode *temp = new ListNode(n);
    temp->next = head;
    head = temp;
}

void insertAtEnd(int n, ListNode *&head)
{
    ListNode *end = new ListNode(n);
    ListNode *current = head;
    while (current)
    {
        current = current->next;
    }
}

int main()
{
    cout << "har har mahadev\n";
    ListNode *head = new ListNode(3);
    AddToHead(8, head);
    PrintList(head);
    // IterationList(head);

    cout << " \n\n ** end ** \n\n";
    return 0;
}