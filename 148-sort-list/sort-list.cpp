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
    ListNode* sortList(ListNode* head) {
      /*  if(head==NULL) return head;
        bool swapped=true;
        while(swapped){
            swapped =false;//taking cond to be true
        ListNode* q=head; ListNode* r=head->next;//assigning the pointers to head and its next node in order to compare the value of both
        while(r!=NULL){ //traversing through the list
            if(q->val>r->val){   //comparijg the value
               int temp=q->val;  //taking the temo variable
                q->val=r->val;
                r->val=temp;
                swapped=true;
            }
            q=q->next; //changing the values og q and r
            r=r->next;
        }
        }
        return head; */ //time limit exceed
        vector<int> ans;
        for(ListNode* p=head;p!=NULL;p=p->next){
            ans.push_back(p->val);
        }
        sort(ans.begin(),ans.end());
        int i=0;
        for(ListNode* p=head;p!=NULL;p=p->next){
            p->val=ans[i++];
        }
        return head;
    }
};