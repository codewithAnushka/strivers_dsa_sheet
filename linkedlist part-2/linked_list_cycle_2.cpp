/**/
//  * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
*/
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next == NULL) return NULL;
        //initialize 2 var
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* entry = head;
        //finding the collision point
        while(fast->next && fast->next->next){
            // move slow and fast simultaneously by 1 and 2 distance
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
};