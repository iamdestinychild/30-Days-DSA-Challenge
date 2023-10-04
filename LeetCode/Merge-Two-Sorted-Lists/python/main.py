from typing import Optional

# Definition for singly-linked list.
class ListNode:
  def __init__(self, val=0, next=None):
    self.val = val
    self.next = next

class Solution:

  def print_result(self):
    self.print_list(self.result)

  def print_list(self, head):
    if head is None:
      print()
      return
    print(head.val, end = " ")
    self.print_list(head.next)
  
  def create_list(self, idx, n, l):
    if idx == n:
      return None
    curr_node = ListNode(l[idx])
    curr_node.next = self.create_list(idx+1, n, l)
    return curr_node

  def __init__(self):
    list1 = [1, 2, 4, 5, 11, 23]
    list2 = [1, 3, 4, 6, 9, 12, 14, 29]

    self.result = self.mergeTwoLists(self.create_list(0, len(list1), list1), 
                                    self.create_list(0, len(list2), list2))

  def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
    if list1 is None and list2 is None: return None
    elif list1 == None: return list2
    elif list2 == None: return list1
    elif list1.val <= list2.val:
      list1.next = self.mergeTwoLists(list1.next, list2)
      return list1
    list2.next = self.mergeTwoLists(list1, list2.next)
    return list2

if __name__ == '__main__':
  s = Solution()
  s.print_result()