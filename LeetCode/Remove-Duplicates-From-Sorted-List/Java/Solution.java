public class Solution {
    public static ListNode deleteDuplicates(ListNode head) {
        
        if(head==null || head.next==null)
            return head;
        
        ListNode prev = head;
        ListNode temp = head.next;
        while(temp!=null){            
            if(temp.val==prev.val){                
                prev.next = temp.next;
                temp = prev.next;                
            }
            else {
                temp= temp.next;
                prev=prev.next;
            }
        }        
        return head;
        
    }

    public static void main(String[] args) {
        ListNode head = new ListNode(1);
        head.next = new ListNode(1);
        head.next.next = new ListNode(2);
        head.next.next.next = null;
        System.out.println("Given List");
        printList(head);
        ListNode ans = deleteDuplicates(head);
        System.out.println("\nAnswer List");
        printList(ans);
    }
    private static void printList(ListNode head) {
        while(head!=null) {
            System.out.print(head.val + " ");
            head = head.next;
        }
    }
}