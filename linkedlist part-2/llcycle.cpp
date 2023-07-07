#include<iostream>
using namespace std;

bool detectCycle(Node *head) {

  if (head == NULL || head->next == NULL) {
    return false;
  }
  // take 2 nodes slow and fast both pointing to head
  Node *slow = head;
  Node *fast = head->next;

  while (slow != fast) {
    // termination condition
    if (fast == NULL || fast->next == NULL) {
      return false;
    }
    // if we never got termination condition then do this
    slow = slow->next;
    fast = fast->next->next;
  }
  return true;
}