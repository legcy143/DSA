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

void AddToTail(int n, ListNode *&tail)
{
    ListNode *endNode = new ListNode(n);
    tail->next = endNode;
    tail = endNode;
}

void AddToPosition(int n, int pos, ListNode *&head)
{
    ListNode *newElem = new ListNode(n);
    ListNode * current = head;
    int currentIndex = 0;
    while (current)
    {
        currentIndex++;
    }
    
    
}

int main()
{
    cout << "har har mahadev\n";
    ListNode *head = new ListNode(3);
    ListNode *tail = head;
    AddToHead(8, head);
    AddToTail(2, tail);
    AddToTail(21, tail);
    // AddToPosition(21, 5, head);
    PrintList(head);
    // IterationList(head);

    cout << " \n\n ** end ** \n\n";
    return 0;
}