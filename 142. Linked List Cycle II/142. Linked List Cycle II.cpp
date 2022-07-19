/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *copy = head;
        unordered_map<ListNode* , int>check;
        while(copy!=NULL){
            if(check[copy]==1)
                return copy;
            check[copy]++;
            copy = copy->next;
        }
        return NULL;
    }
};