class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int total = 0;
        for(int x : nums)
            total += x;
        int left = 0;
        int right = total;
        vector<int> ans;
        for(int x : nums) {
            right -= x;
            ans.push_back(abs(left - right));
            left += x;
        }
        return ans;
        
    }
};