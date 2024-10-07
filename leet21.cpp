#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    ListNode *p1, *p2, *temp, *temp2;
    p1 = list1;
    p2 = list2;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->val <= p2->val)
        {
            temp = p1;
            p1 = p1->next;
            temp2 = p2;
            p2 = temp;
            p2->next = temp2;
        }
    }

    return list2;
}

void appendNode(ListNode *&head, ListNode *&tail, int value)
{
    ListNode *newNode = new ListNode(value);
    if (!head)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    int n, m;
    ListNode *head1 = nullptr;
    ListNode *tail1 = nullptr;
    ListNode *head2 = nullptr;
    ListNode *tail2 = nullptr;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        appendNode(head1, tail1, x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        appendNode(head2, tail2, y);
    }

    ListNode *mergedHead = mergeTwoLists(head1, head2);

    // Print the merged list
    ListNode *current = mergedHead;
    while (current)
    {
        cout << current->val << " "; // Print the value of the current node
        current = current->next;     // Move to the next node
    }
    cout << endl; // Print a new line at the end

    return 0;
}
