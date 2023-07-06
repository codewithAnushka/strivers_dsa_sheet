class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         //first-> ek tail ka intezam karo, current ka intezam karo
         //tail = previous
        ListNode* prev = NULL, *curr= head;
        //traverse tab tak jab tak current  = null nahi ho jata
        while(curr != NULL){
            //curr ke baad wale ko temp me store
            ListNode* temp = curr->next;
            //curr next k pointer ko tod do aur prev se jod do
            curr->next = prev;
            //shift prev ->curr and curr->temp
            prev = curr;
            curr = temp;
        }
        return prev;//now this is head 
    }
};