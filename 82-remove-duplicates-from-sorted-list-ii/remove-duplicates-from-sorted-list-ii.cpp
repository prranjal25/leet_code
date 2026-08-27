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
        vector<int> ans;vector<int> dude;
        for(ListNode* p=head;p!=NULL;p=p->next){
            ans.push_back(p->val);
        }
        unordered_map<int,int> mp;
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
       for(int i=0;i<ans.size();i++){
            if(mp[ans[i]]==1){
                dude.push_back(ans[i]);
            }
        }
       /* int i=0;
        for(ListNode* p=head;p!=NULL;p=p->next){
            p->val=dude[i++];
        }
        return head; */
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        for(int x:dude){
            curr->next=new ListNode(x);
            curr=curr->next;
        }
        return dummy->next;
    }
};