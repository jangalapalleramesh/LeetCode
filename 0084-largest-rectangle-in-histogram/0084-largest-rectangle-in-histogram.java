class Solution {
    public int largestRectangleArea(int[] heights) {
        //Take one stack data Structure
        int n = heights.length;
        Stack<Integer> st = new Stack<Integer>();
        int maxArea = 0;
        for(int i=0;i<heights.length;i++){
            while(!st.isEmpty() && heights[st.peek()]>heights[i]){
                int cal = heights[st.pop()];
                maxArea = (st.isEmpty())?Math.max(maxArea,cal*i):Math.max(maxArea,cal*(i-st.peek()-1));

            }
            st.push(i);
        }
        while(!st.isEmpty()){
            int cal = heights[st.pop()];
             maxArea = (st.isEmpty())?Math.max(maxArea,cal*n):Math.max(maxArea,cal*(n-st.peek()-1));
        }
        return maxArea;
        
    }
}