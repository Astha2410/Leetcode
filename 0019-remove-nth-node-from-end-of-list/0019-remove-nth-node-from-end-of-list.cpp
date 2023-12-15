class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     /* ListNode* start = new ListNode();
      start->next = head;
      ListNode* fast = start;
      ListNode* slow = start;

      for(int i = 1; i <= n; ++i){
          fast = fast->next;
      }
      while(fast->next != NULL){
          fast = fast->next;
          slow = slow->next;
      }
      slow->next = slow->next->next;
      return start->next;
      */

      ListNode* one = head;
      ListNode* two = head;

      while(n--){
          two= two->next;
      }
      if(two == NULL) {
          return one->next;
      }
      while(two->next != NULL){
          two = two->next;
          one = one->next;
      }
      one->next = one->next->next;
      return head;
        
    }
};