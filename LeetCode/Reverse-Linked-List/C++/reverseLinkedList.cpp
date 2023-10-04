#include <bits/stdc++.h>
using namespace std;

//  * Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// TC : O(N) where N is the number of nodes in the linked list, SC = O(1)
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        ListNode *prev = NULL, *curr = head, *nxt;

        while (curr != NULL)
        {
            nxt = curr->next;

            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }
};

int main()
{
    Solution sol;

    // 1->2->3->4
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "original linked list: ";
    ListNode *temp = head;
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;

    head = sol.reverseList(head);
    cout << "reversed linked list: ";
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }

    return 0;
}