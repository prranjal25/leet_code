class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(); int target=0; vector<vector<int>> ans; 
        for(int i=0;i<n;i++){
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            unordered_set<int> hash;
            for(int j=i+1;j<n;j++){
                long long sum=nums[i]+nums[j];
                long long third=target-sum;
                if(hash.find(third)!=hash.end()){
                   ans.push_back({nums[i],(int)third,nums[j]});
                   while(j+1<n && nums[j]==nums[j+1])
                    j++;
                   }
                hash.insert(nums[j]);
            }
            }

        return ans;
        
    }
};