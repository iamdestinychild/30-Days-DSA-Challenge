class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }
        if (l1->val <= l2->val)
        {
            ListNode *head = l1;
            head->next = mergeTwoLists(l1->next, l2);
            return head;
        }
        else
        {
            ListNode *head = l2;
            head->next = mergeTwoLists(l1, l2->next);
            return head;
        }
        return NULL;
    }

    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        if (lists.size() == 0)
        {
            return NULL;
        }
        ListNode *head = lists[0];
        for (int i = 1; i < lists.size(); i++)
        {
            head = mergeTwoLists(head, lists[i]);
        }
        return head;
    }
};