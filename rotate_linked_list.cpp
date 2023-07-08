/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
       if(!head || !head->next || k==0) return head;

        //compute the length
        //assign a dummy node to head
        Node* cur = head;
        int len = 1;//keep a counter for length
        // move current pointer untill it reaches the last node and simultaneously increase the val of length
        while(cur->next && ++len)
            cur = cur->next;

            //pointing the last node to head
            cur->next = head;
            k = k % len;//if k>=len it gets reduces to lesser than length
            k = len - k;//bcoz we are required to find the len-kth node from the start
            while(k--) cur = cur->next;//start moving curr to curr->next
            //keep moving till it doesn't reduces to 0

            head = cur->next;
            cur->next = NULL;
        return head;
}