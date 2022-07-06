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
   ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* r = list1;
        ListNode* prevr = list1;
        int counter = 0;
        while(r!=NULL){
                if(counter==a)
                     break;
                prevr = r;
                r = r->next;
                counter++;
        }
            if(a!=b){
                    r = r->next;
                    counter++;
            }
              prevr->next = list2;
              while(list2->next!=NULL)
               list2 = list2->next;   
            while(r!=NULL){
              if(counter==b)
                     break;
                  r = r->next;
                  counter++;
            }
        list2->next = r->next;
            return list1;
    }
};