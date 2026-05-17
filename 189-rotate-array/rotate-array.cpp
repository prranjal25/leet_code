class Solution {
public:
    void rotate(vector<int>& nums, int k) {
  /*     int i=0;int n=nums.size();
        while(i<k){
           int temp=nums[n-1];
           for(int j=n-1;j>0;j--){  //shifts the element 
            nums[j]=nums[j-1];                         
           }
           nums[0]=temp;  //carrying last element to the front
           i++;
        }*/ // time limit exceeds
          int n = nums.size();
        k = k % n;
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            ans[(i + k) % n] = nums[i];
        }
        for(int i = 0; i < n; i++) {
            nums[i] = ans[i];
        }

    }
};