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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int , int>check;
        ListNode* h1 = head;
        ListNode* h2 = NULL;
        while(h1!=NULL){
           check[h1->val]++;
            if(check[h1->val]>1){
                h2->next = h1->next;
                check[h1->val]--;
                h1 = h1->next;
                continue;
            }
            h2 = h1;
            h1 = h1->next;
        }
    
        return head;
    }
};
