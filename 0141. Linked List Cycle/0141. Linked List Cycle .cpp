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
    bool hasCycle(ListNode *head) {
        map<ListNode*  ,int>check;
        ListNode *temp = head;
        while(temp!=NULL){
            check[temp]++;
            if(check[temp]>2)
                return 1;
            temp=temp->next;
        }
        return 0;
    }
};
