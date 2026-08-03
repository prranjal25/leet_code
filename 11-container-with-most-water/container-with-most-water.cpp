class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0; int h=n-1;
        int maxarea=0;
        while(l<h){
            int newarea=min(height[l],height[h])*(h-l);
           maxarea=max(maxarea,newarea);
            if(height[l]<height[h])
            l++;
            else
            h--;
        }
        
        return maxarea;
    }
};