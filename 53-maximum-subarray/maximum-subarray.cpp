class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int currs=0; int maxs=INT_MIN;
        for(int i =0;i<n;i++){
            currs=currs+nums[i];
            maxs=max(currs,maxs);
            if(currs<0){
                currs=0;
            }
        }
        return maxs;
    }
};