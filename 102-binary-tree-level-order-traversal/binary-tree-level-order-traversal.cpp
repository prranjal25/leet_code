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
void find(TreeNode* root,int l,vector<vector<int>>&ans ){
    if(root==NULL) return;
    if(l==ans.size()){
        ans.push_back({});
    }
    ans[l].push_back(root->val);
    find(root->left,l+1,ans);
    find(root->right,l+1,ans);

}
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        find(root,0,ans);
        return ans;
    }
};