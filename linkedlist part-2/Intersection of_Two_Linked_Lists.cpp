#include<iostream>
using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //if any linked list is null- we know that we will never find an intersection point
        if(headA == NULL || headB == NULL) return NULL;
        //take 2 dummy nodes and point it to heads of both linked lists
        ListNode* a = headA;
        ListNode* b = headB;

        //keep on traversing till both of them are not equal
        while(a != b){
            //for the end of 1st iteration, we just reset the pointer to head of another linkedlist
            a = a == NULL? headB : a->next;//if a is null shift it  head of other linked list and if it is not null simply move it to next node
            b = b == NULL? headA : b->next;//if b is null shift it  head of other linked list and if it is not null simply move it to next node
        }
        return a;
    }
};