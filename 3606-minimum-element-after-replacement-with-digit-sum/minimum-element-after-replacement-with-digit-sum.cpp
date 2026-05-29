class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            while (nums[i]!=0){
               int remainder=nums[i]%10;
                sum=sum +remainder;
                nums[i]=nums[i]/10;
            }
            ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        return ans[0];
    }
};