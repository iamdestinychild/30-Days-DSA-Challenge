#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    // Merge two sorted lists
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (!list1)
            return list2;
        if (!list2)
            return list1;

        ListNode *dummy = new ListNode(INT_MIN, list1);
        ListNode *tail = dummy, *p1 = list1, *p2 = list2, *head;

        while (p1 && p2)
        {
            if (p1->val <= p2->val)
            {
                tail->next = p1;
                p1 = p1->next;
            }
            else
            {
                tail->next = p2;
                p2 = p2->next;
            }
            tail = tail->next;
        }
        if (p1)
            tail->next = p1;
        else
            tail->next = p2;
        head = dummy->next;
        delete dummy;
        return head;
    }

    // Merge K sorted lists
    ListNode *merge(vector<ListNode *> &lists, int i, int j)
    {
        if (j - i == 0)
            return lists[i];

        int mid = i + (j - i) / 2;
        ListNode *leftmerge = merge(lists, i, mid);
        ListNode *rightmerge = merge(lists, mid + 1, j);
        return mergeTwoLists(leftmerge, rightmerge);
    }

    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        int k = lists.size();
        if (k == 0)
            return nullptr;

        ListNode *head = merge(lists, 0, k - 1);
        return head;
    }
};

int main()
{
    // Create sample linked lists
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(5);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode *list3 = new ListNode(2);
    list3->next = new ListNode(6);

    // Create a vector of linked lists
    vector<ListNode *> lists = {list1, list2, list3};

    Solution solution;
    ListNode *merged = solution.mergeKLists(lists);

    // Print the merged list
    while (merged)
    {
        cout << merged->val << " ";
        merged = merged->next;
    }

    return 0;
}
