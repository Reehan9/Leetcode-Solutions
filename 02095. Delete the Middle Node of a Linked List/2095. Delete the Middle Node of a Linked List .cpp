class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
            if(head->next==NULL)
                    return NULL;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = head;
        while(fast && fast->next){
      prev = slow;
      slow = slow->next;
      fast = fast->next->next;
    }
            prev->next = prev->next->next;
  return head;    
    }
};
