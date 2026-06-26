class Solution {
public:
int merge(vector<int> & nums,int low,int mid,int high){
    int cnt=0;
    int j=mid+1;
    for(int i=low;i<=mid;i++){    //NUMBER OF PAIRS
        while(j<=high && (long long)nums[i]> 2LL * nums[j])
        j++;
        cnt+=j-(mid+1);
    }
    vector<int> temp;  //FOR MERGING
    int l=low; int r=mid +1;
    while(l<=mid && r<=high){
        if(nums[l]<=nums[r])
            temp.push_back(nums[l++]);
            else
            temp.push_back(nums[r++]);        
    }
    while(l<=mid) temp.push_back(nums[l++]);
    while(r<=high) temp.push_back(nums[r++]);
    for(int i=low;i<=high;i++)
        nums[i]=temp[i-low];
        return cnt;
    
}
int mergesort(vector<int> &nums,int low,int high ){   //here it all start
    if(low>=high) return 0;
    int mid=(low+high)/2;
    int cnt=0;
    cnt+=mergesort(nums,low,mid);
    cnt+=mergesort(nums,mid+1,high);
    cnt+=merge(nums,low,mid,high);
    return cnt;
}
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
        
    }
};