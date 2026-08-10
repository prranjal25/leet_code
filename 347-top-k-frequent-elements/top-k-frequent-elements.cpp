class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int x:nums){
            mp[x]++;
        }
        while(count<k){
            int large=0;
            int out=0;
            for(auto x:mp){
                if(x.second>large){
                    large=x.second;
                    out=x.first;
                    
                }
            }
            ans.push_back(out);
            mp.erase(out);
            count++;
        }
        return ans;
    }
};