/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head)
{

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }

    return false;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ListNode *head = NULL;
    ListNode *tail = NULL;

    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        ListNode *newNode = new ListNode(x);

        if (!head)
            head = newNode;
        else
            tail->next = newNode;
        tail = newNode;
    }

    cout << hasCycle(head);
}
