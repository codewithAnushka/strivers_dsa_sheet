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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     /* ListNode* head = new ListNode(0);
        ListNode* curr = head;

        while(list1 != NULL && list2 !=NULL){
            //list1 ka data is smaller than equal to list2 ka data
            if(list1->val <= list2->val){
                curr->next = list1;
                list1 = list1->next;
            }
            //esa agar nhi hua
            else{
                curr->next = list2;
                list2 = list2->next;
            }
            curr = curr->next;

        }
        //agar koi list bach jaay
        if(list1 != NULL){
            curr->next = list1;
        }
        if(list2 != NULL){
            curr->next = list2;
        }
        return head->next;*/


// if 1st LL is empty 2nd list is ans 
if(list1 == NULL) return list2;
// if 2nd LL is empty 1st list is ans 
if(list2 == NULL) return list1;

// if linkedlist 1>linkedlist2 swap them
if(list1->val > list2->val)  
swap(list1, list2);
//l1 is smaller

//then assign result to l1- head of the merged sorted list
ListNode* res = list1;

//iterate till list1 or list2 reaches null
while(list1 != NULL && list2 != NULL){
    ListNode* temp = NULL;//assign temp=null for every iteration
    //iterate for l1 till it doesn't reaches null and its vval is <= list2 value
    while(list1 != NULL && list1->val <= list2->val){
        temp = list1;//remember the node in temp
        list1 = list1->next;//after that move l1
    }
    //since we remember the l1 that is temp we can simply point it to l2 to have new connection
    temp->next = list2;
    swap(list1, list2);//swap l1,l2 before every iteration
}
return res;//res will be pointing toward the head of newly merged linked list 
    }
};