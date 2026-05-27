class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> out(n,0);
        int pos=0;int neg=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                out[pos]=nums[i];
                pos=pos+2;
            }else{
                out[neg]=nums[i];
                neg=neg+2;
            }
        }
        return out;
    }
};