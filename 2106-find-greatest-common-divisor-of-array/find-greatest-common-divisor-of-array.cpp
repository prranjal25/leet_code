class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int ans=0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxi)
                maxi = nums[i];
            if (nums[i] < mini)
                mini = nums[i];
        }
        ans=std::gcd(mini,maxi);
        return ans;

        }
    };