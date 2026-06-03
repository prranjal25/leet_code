class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        //BRUTE HAI YE
        int n=nums.size();int k=-1;
        int m=nums[0].size();
        for(int i=0;i<n;i++){
            if(target<=nums[i][m-1]  && target>=nums[i][0]){
                k=i;
                break;
          }
        }if(k==-1) return false;
          for(int j=0;j<m;j++){    // LINE 13 SE18 KI JAGAH return binary_search(nums[k].begin(),nums
                                     // [k].end()),target  USE KAR SAKTE HAIN)
            if(target==nums[k][j]){
                return true;
            }
          }
          return false;
    }
};    