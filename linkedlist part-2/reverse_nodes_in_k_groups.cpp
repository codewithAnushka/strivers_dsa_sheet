
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //if k=1 or linkedlist is empty return head
        if(head == NULL || k == 1) return head;
        //create a dummy node
        ListNode*dummy = new ListNode(0);
        dummy->next = head;

        //for the 1st iteration
        ListNode *cur = dummy, *nex = dummy, *pre = dummy;
        int count = 0;
        //finding length of linkedlist
        while(cur->next != NULL){
            //keep moving curr untill it reaches the last node
            cur = cur->next;
            count++;//counts the num of nodes
        }
        //iterate till count>=k
        while(count >= k){
            cur = pre->next;//dummy->next
            nex = cur->next;//nex=2nd node
            for(int i=1; i<k; i++){
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }

            pre = cur;
            count = count - k;
        }
        return dummy->next;
    }
};