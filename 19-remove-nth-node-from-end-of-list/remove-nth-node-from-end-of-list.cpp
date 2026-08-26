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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *q=head;ListNode* r=head;
        for(int i=0;i<n;i++) q=q->next;
        if(q==NULL) return head->next;
        while(q->next!=NULL){
            q=q->next;
            r=r->next;
        }
        r->next=r->next->next;
        return head;

        
    }
};