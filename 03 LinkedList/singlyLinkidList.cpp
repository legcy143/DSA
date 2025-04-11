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
// ListNode AddToHead() {
//     return nullptr;
// };

void IterationList(ListNode *head)
{
    while (head)
    {
        cout<< head->val;
        head = head->next;
    }
}

int main()
{
    cout << "har har mahadev\n";
    ListNode *head = new ListNode(3);
    IterationList(head);

    cout << " \n\n ** end ** \n\n";
    return 0;
}