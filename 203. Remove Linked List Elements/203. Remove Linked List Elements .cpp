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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* copy = head;
        ListNode* temp = copy;
        while(copy!=NULL){
            if(head->val==val)
                head = head->next;
            if(copy->val==val){
                temp->next = copy->next;
                copy = copy->next;
                continue;
            }
            temp = copy;
            copy = copy->next;
        }
        return head;
    }
};