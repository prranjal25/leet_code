class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<string> s;
        int n=nums.size();
        for(int i=0;i<n-1;i+=2){
            string temp = to_string(nums[i]) + to_string(nums[i+1]);
            s.push_back(temp);
        }
        int mini = INT_MAX;
        for(auto it:s){
            int temp=stoi(it);
            mini=min(mini, temp);
        }
        
        return mini;
        
    }
};