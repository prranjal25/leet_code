class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count =0;
        vector<int> sum(n,0);
        sum[0]=nums[0];
        for(int i=1;i<n;i++){
            sum[i]=sum[i-1]+nums[i];
        }
        unordered_map<int,int> map; //storing the frequency
        for(int j=0;j<n;j++){
            if(sum[j]==k)
                count ++;
                int z=sum[j]-k;
                if(map.find(z)!=map.end()){
                    count=count +map[z];
                }
                if(map.find(sum[j])==map.end()){ //IF ANY VALUE OCCURS MORE THAN ONE , SO TO ITS FREQUENCY HAS TO BE INCREASED
                    map[sum[j]]=0;
                }
                map[sum[j]]++;
            
        }
        return count;
    }
};