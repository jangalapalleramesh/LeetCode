class Solution {
public:
    int maxArea(vector<int>& height) {
        long maxArea = 0;
        int l =0;
        int r = height.size()-1;
        while(l<r){
            long tempArea = (r-l)*min(height[r],height[l]);
            if(tempArea>maxArea){
                maxArea = tempArea;
            }
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return maxArea;
        
    }
};