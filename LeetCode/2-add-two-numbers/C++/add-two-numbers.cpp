/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
    void reverse(ListNode* &head){
        ListNode* current = head;
        ListNode* prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
        
    };
     void print(ListNode* &head)
    {
        struct ListNode* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
    };
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // reverse(l1);
        // reverse(l2);
        ListNode* res = NULL;
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        int carry = 0;
        while(head1 != NULL && head2 != NULL){
            int data = (head1 -> val) + (head2 -> val) + carry;
            if(data >= 10){
                data = data - 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            // cout << data << "data" << endl;
            ListNode* newNode = new ListNode(data);
            newNode -> next = res;
            res = newNode;
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        while(head1 != NULL){
            int data = (head1 -> val) + carry;
            if(data >= 10){
                data = data - 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* newNode = new ListNode(data);
            newNode -> next = res;
            res = newNode;
            head1 = head1 -> next;

        }
        while(head2 != NULL){
            int data = (head2 -> val) + carry;
            if(data >= 10){
                data = data - 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* newNode = new ListNode(data);
            newNode -> next = res;
            res = newNode;
            head2 = head2 -> next;

        }
        if(carry == 1){
            ListNode* newNode = new ListNode(1);
            newNode -> next = res;
            res = newNode;
        }
        reverse(res);
        return res;
    }
};