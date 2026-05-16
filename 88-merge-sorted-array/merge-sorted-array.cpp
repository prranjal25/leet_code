class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
       while(i<m){
        nums1[i]=nums1[i];
        i++;
       }
            for(int j=0;j<n;j++){
                nums1[j+m]=nums2[j];
            }
sort(nums1.begin(),nums1.end());
    }
};