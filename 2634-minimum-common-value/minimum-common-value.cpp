class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       /* int hash1[10000001]={0};
        int hash2[10000001]={0}; int result =-1; int jai[10000001]={0};
        int n=nums1.size();
        int m=nums2.size();
        int k=m+n;
        for(int i=0;i<n;i++){
            hash1[nums1[i]]=1;
        }
        for(int i=0;i<m;i++){
            hash2[nums2[i]]=1;
        }
        for(int i=0;i<10000000;i++){
            if(hash1[i]==1 && hash2[i]==1){
              jai[i]=hash1[i];
            }
        }
          for(int i=0;i<10000000;i++){
            if(jai[i]==1){
                result = i;
                break;
            }
          }
          return result; */  // USING HASHING HERE COZ EXCESS MEMMORY SPACE
            int n=nums1.size();
            int m=nums2.size(); int i=0;int j=0;
            while(i<n && j<m){
                if(nums1[i]==nums2[j]){
                    return nums1[i];
                }else if(nums1[i]<nums2[j]){
                    i++;
                }else{
                    j++;
                }
            }
        return -1;
    }
};
