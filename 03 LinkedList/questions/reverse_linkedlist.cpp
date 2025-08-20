#include <iostream>
using namespace std;
#include <vector>

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

void BulkAdd(vector<int> list, ListNode *&head)
{
    for (int i = 0; i < list.size(); i++)
    {
        ListNode *temp = new ListNode(list[i]);
        temp->next = head;
        head = temp;
    }
}

void ReverseList(ListNode *&head)
{
    if (!head)
        return;
    ListNode *current = head;
    ListNode *historyNode = nullptr;

    while (current)
    {
        ListNode *newNode = new ListNode(current->val);
        head = newNode;
        head->next = historyNode;
        historyNode = newNode;
        current = current->next;
    }
}

int main()
{
    cout << "har har mahadev\n";
    ListNode *head = new ListNode(3);
    BulkAdd({8, 3, 4, 5, 2, 4}, head);
    PrintList(head);
    ReverseList(head);
    cout<<"After reverse \n";
    PrintList(head);
    // IterationList(head);

    cout << " \n\n ** end ** \n\n";
    return 0;
}