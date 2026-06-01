class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int l =0;//left
        int r=m-1;
        int  t=0;
        int b=n-1;
        vector<int> ans;
        while(l<=r && t<=b){
        for(int i=l;i<=r;i++){
            ans.push_back(mat[t][i]);
        }
        t++;
        for(int i=t;i<=b;i++){
            ans.push_back(mat[i][r]);
        }
        r--;
        if(t<=b){
        for(int i=r;i>=l;i--){
            ans.push_back(mat[b][i]);
        }
        b--;
        }
        if(l<=r){
        for(int i=b;i>=t;i--){
            ans.push_back(mat[i][l]);
        }
        l++;
    }
        }
        return ans;
    }
};