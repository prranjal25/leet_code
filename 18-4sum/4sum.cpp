class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       

        int n = nums.size();
                vector<vector<int>> ans;

        set<vector<int>> st;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<long long> hash;
                for (int k = j + 1; k < n; k++) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k]; //USING THREE SUM TO FIND FOURTH ELEMENT
                    long long fourth = target - sum;
                    if (hash.find(fourth) != hash.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k],
                                            (int)fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hash.insert(nums[k]);
                }
            }
        }

        for (auto it : st) {
            ans.push_back(it);
        }
        return ans;
    }
};
