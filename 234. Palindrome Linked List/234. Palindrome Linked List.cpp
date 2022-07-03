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
    bool isPalindrome(ListNode* head) {
        list<int>check;
        ListNode* temp  = head;
        while(temp!=NULL){
            check.push_back(temp->val);
            temp = temp->next;
        }
        check.reverse();
        temp = head;
        auto it = check.begin();
        while(it!=check.end() && temp!=NULL){
            if(*it!=temp->val)
                return false;
            it++;
            temp = temp->next;
        }
        return true;
    }
};