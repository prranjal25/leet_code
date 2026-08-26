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
    ListNode* swapPairs(ListNode* head) {
         if(head==NULL) return {};
        if(head->next ==NULL) return head;
        ListNode* q=head;ListNode* r=head->next;
        ListNode* prev=nullptr;
        while(q!=NULL && q->next!=NULL){
            ListNode* temp=q->next;
            q->next=temp->next;
            temp->next=q;
            if(prev) prev->next=temp;
            prev=q;
            q=q->next;
        }
        return r;
    }
};