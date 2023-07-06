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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //create dumy node
        ListNode* dummy = new ListNode();
        //create a temp which copies the dumy node
        ListNode* temp = dummy;
        int carry =0;
        //iterate till either of them becomes null,null or 0
        while(l1 != NULL || l2 != NULL || carry){
            int sum=0;//initialize var sum=0
            if(l1 != NULL){
                //if l1 is not null
                sum += l1->val;//add it to the sum
                l1 = l1->next;//move to next
            }
            if(l2 != NULL){
                //if l2 is not sull
                sum += l2->val;//add it to sum
                l2 = l2->next;//move to next
            }

            sum += carry;//add carry to the sum
            carry = sum / 10;
            ListNode* node = new ListNode(sum % 10);//create new node with value sum % 10
            temp->next = node;//point next link of temp to the currnt node
            temp = temp->next;//move temp to next node
        }
        return dummy->next;
    }
};