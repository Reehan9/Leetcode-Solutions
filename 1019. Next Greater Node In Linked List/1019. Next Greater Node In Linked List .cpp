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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* c1 = head;
        ListNode* c2 = head;
        vector<int>ans;
        while(c1!=NULL){
            while(c2!=NULL){
                if(c1->val<c2->val){
                    ans.push_back(c2->val);
                    c2 = c1->next;
                    break;
                }
                c2 = c2->next;
            }
            if(c2==NULL){
                ans.push_back(0);
                c2 = c1->next;
            }
            c1 = c1->next;
        }
        return ans;
    }
};