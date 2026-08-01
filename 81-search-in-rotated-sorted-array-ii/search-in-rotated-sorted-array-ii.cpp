class Solution {
public:
    bool search(vector<int>& nums, int target) {
        unordered_map<int,int> count;
        for(int i:nums){
            count[i]++;
        }
        return count.find(target)!=count.end();
    }
};