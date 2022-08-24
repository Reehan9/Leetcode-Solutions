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
    ListNode* mergeNodes(ListNode* head) {
        bool checker = false ;
        int sum = 0;
        ListNode* check = head;
        ListNode* temp = head;
        while(check!=NULL){
            if(check->val==0 && checker == false){
                checker = true;
                check = check->next;
                continue;
            }
            if(checker){
                sum = sum + check->val;
            if(check->val==0 && checker == true){
                temp->val = sum;
                if(check->next==NULL)
                    temp->next = NULL;
                else 
                temp = temp->next;
                sum = 0;
            }
            }
            check = check->next;
        }
            return head;        
    }
};
