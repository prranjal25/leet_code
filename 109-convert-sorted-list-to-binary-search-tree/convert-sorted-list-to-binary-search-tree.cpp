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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void treetoarray(ListNode* head,vector<int>&ans){
    while(head!=NULL){
        ans.push_back(head->val);
        head=head->next;
    }
}
TreeNode* got(vector<int> &ans,int l,int r){
    if(l>r) return NULL;
        int mid=l+(r-l)/2;
        TreeNode* node=new TreeNode(ans[mid]);
    node->left=got(ans,l,mid-1);
    node->right=got(ans,mid+1,r);
    return node;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
        vector<int> ans;
        treetoarray(head,ans);
        return got(ans,0,ans.size()-1);
    }
};