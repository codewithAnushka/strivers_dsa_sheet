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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //declare a dummy node = start
        ListNode* start = new ListNode();
        //and assign its next to head of linked list
        start->next = head;
        //initialize fast and slow pointers
        //intitilly to start the dummy node
        ListNode* fast = start;
        ListNode* slow = start;
        //move the fast pointer by n itrations
        for(int i=1; i<=n; ++i){
            fast = fast->next;

        }
        //we'll move the fast and slow pointer to one step together till fast reaches null
        while(fast->next != NULL){
            // and once it reaches null, we'll break the link
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;

        return start->next;
    }
};