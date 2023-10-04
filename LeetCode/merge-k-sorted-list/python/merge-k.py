# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

from typing import List, Optional

class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        store = {}
        for lst in lists:
            start = lst
            while start:
                curr = start
                while curr.next and curr.next.val == start.val:
                    curr = curr.next
                try:
                    sect_head, sect_tail = store[start.val]
                except KeyError:
                    store[start.val] = [start, curr]
                else:
                    sect_tail.next = start
                    store[start.val][1] = curr
                start = curr.next
        tail = None
        head = None
        for key in sorted(store.keys()):
            front = store[key][0]
            if not tail:
                head = front
            else:
                tail.next = front
            tail = store[key][1]
        return head

# Helper function to print the linked list
def printLinkedList(head):
    while head:
        print(head.val, end=" -> ")
        head = head.next
    print("None")

# Create some sample linked lists for testing
list1 = ListNode(1, ListNode(4, ListNode(5)))
list2 = ListNode(1, ListNode(3, ListNode(4)))
list3 = ListNode(2, ListNode(6))

# Create a list of linked lists
lists = [list1, list2, list3]

# Create a solution object
solution = Solution()

# Merge the k sorted lists
merged = solution.mergeKLists(lists)

# Print the merged list
printLinkedList(merged)
