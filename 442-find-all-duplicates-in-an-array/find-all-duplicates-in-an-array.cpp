class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        vector<int> ans;
        for(int i=0;i<n;i++){
            hash[nums[i]]+=1;
        }
        for(int j=0;j<=n;j++){
            if(hash[j]>1){
                ans.push_back(j);
            }
        }
        return ans;
    }
};