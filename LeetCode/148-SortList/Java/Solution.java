class Solution {
    public ListNode sortList(ListNode head) {
        int i =0;
        ListNode temp = head;
        int size = getSize(temp);
        int[] arr = new int[size];
        temp = head;
        while(temp!= null){
            arr[i++] = temp.val;
            temp = temp.next;
        }
        Arrays.sort(arr);
        temp = head;
        i=0;
        while(temp!= null){
            temp.val = arr[i++];
            temp = temp.next;
        }

        return head;
    }
   public static int getSize(ListNode head) {
        int size = 0;
        ListNode currentNode = head;

        while (currentNode != null) {
            size++;
            currentNode = currentNode.next;
        }

        return size;
    }
}
