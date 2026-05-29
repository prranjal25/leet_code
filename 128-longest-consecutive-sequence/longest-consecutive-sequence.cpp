class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        unordered_set<int> hash;
        for(int i=0;i<n;i++){
            hash.insert(nums[i]);
        }
        int count=1, longest=1;
        for(auto it : hash){
            if(hash.find(it-1) == hash.end()) //if element predecer is present
            {
                count =1;
                int x= it;
            
                while(hash.find(x+1)!=hash.end()){
                    count ++;
                    x ++;
                }
            longest=max(longest,count);
            }
        }
        return longest;
    }
};