class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int h=n-mid;
            if(citations[mid]>=h){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        return n-l;
        
    }
};