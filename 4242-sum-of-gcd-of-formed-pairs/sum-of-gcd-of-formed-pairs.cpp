class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixGcd;
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            prefixGcd.push_back(std::gcd( nums[i],mx));
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        int m = prefixGcd.size();
        long long ans = 0;
        for (int i = 0; i < n / 2; i++) { 
            ans =ans+ std::gcd(prefixGcd[i], prefixGcd[n - i - 1]);
        }
        return ans;
    }
};