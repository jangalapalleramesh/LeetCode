class Solution {
    public int trap(int[] height) {
        //approach is when you are standing at building the storage unit of water on that buildind is depended up on min(maxHeight of building on either side of that building);
        //to find max building we will do two way traversal
        //one from left and another from right
        //we have to focus on mainly minmum height building
        // so we start traversal
        int n = height.length;
        int l = 0;
        int r = n-1;
        int leftMax = 0,rightMax = 0,total = 0;
        while(l<r){
            if(height[l]<=height[r]){
                //we have to work with left pointer
                if(height[l]<leftMax){
                    total+=(leftMax-height[l]);
                }
                else{
                    leftMax = height[l];
                }
                l++;
            }
            else{
                //if right position building is smaller then we have to work on right side building
                if(height[r]<rightMax){
                    total+=(rightMax-height[r]);
                }
                else{
                    rightMax = height[r];
                }
                r--;
            }
            
          
        }
        return total;
        
    }
}