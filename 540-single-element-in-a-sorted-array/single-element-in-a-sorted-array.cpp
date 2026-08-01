class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto j:freq){
            if(j.second==1){  //in hasing j.second provides the value at j.first index ,,for example {2,5} , so value at index 5 is 2
                return j.first;
            }
        }
        return 0;
    }
};