class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer;
        long long product=1;
        long zero=0;int k;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                product=product*nums[i];
            }else{
          zero++;
            }
        }
        for(int j=0;j<n;j++){
            if(zero>1){
                answer.push_back(0);
            }else if(zero==1){
            if(nums[j]==0){
            k=product;
            answer.push_back(k);
        }else{
            answer.push_back(0);
            }
            }else{
            k=product/nums[j];
            answer.push_back(k);
        }
}
        
        return answer;
    }
};//the zero implies that there  importance of taking zero into consideration 