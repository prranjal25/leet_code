class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int low=prices[0];int k=0;int ans=0;
        for(int i=1;i<n;i++){
            if(prices[i]<low){
                low=prices[i];
                k=i;
            }  else {
            ans = max(ans, prices[i] - low);
            }
        }
        return ans;
    }
};