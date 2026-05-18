class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();int i;int k=0;int j=0;
        int hash[10000001]={0};
        sort(nums.begin(),nums.end());
        int l=nums[n-1];
        nums.resize(100);
        for( i=0;i<n;i++){
            hash[nums[i]]=1;  //for initializing the present values in nums in hash array
        }
        for( i=0;i<=l;i++){
            if(hash[i]==1){
                j=i;    //for initial value of range ; coz this is not 1 to n elements; it has    some boundries ; so here j represents the value where we get the index of the starting element
                break;
            }
        }
        for( i=j;i<=l;i++){  //here this loop checks between the given number
        if(hash[i]==0){    //where the value of hash becomes zero the index provides the answer
            nums[k]=i;
            k++;

        }
    }
    nums.resize(k);
    return nums;
    }
};