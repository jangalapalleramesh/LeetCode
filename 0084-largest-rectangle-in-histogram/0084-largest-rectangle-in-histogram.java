class Pair{
    int val;
    int index;
    Pair(int val,int index){
        this.val = val;
        this.index = index;
    }
}
class Solution {
    private int[] nextSmallerElement(int[] heights){
        int n = heights.length;
        int[] nse = new int[n];
        Stack<Pair> st = new Stack<>();
        nse[n-1]=n;
        st.push(new Pair(heights[n-1],n-1));
        for(int i=n-2;i>=0;i--){
            while(!st.isEmpty() && heights[i]<= st.peek().val){
                st.pop();
            }
            nse[i]=(st.isEmpty())?n:st.peek().index;
            st.push(new Pair(heights[i],i));
        }

        return nse;
    }

    private int[] prevSmallerElement(int[] heights){
        int n = heights.length;
        int[] pse = new int[n];
        Stack<Pair> st = new Stack<>();
        pse[0]=-1;
        st.push(new Pair(heights[0],0));
        for(int i=1;i<n;i++){
            while(!st.isEmpty() && heights[i]<=st.peek().val){
                st.pop();
            }
            pse[i]=(st.isEmpty())?-1:st.peek().index;
            st.push(new Pair(heights[i],i));
        }
        return pse;
    }
    public int largestRectangleArea(int[] heights) {
        int n = heights.length;
        int[] nse = nextSmallerElement(heights);
        int[] pse = prevSmallerElement(heights);
        // for(int i=0;i<n;i++){
        //     System.out.print(nse[i]+" ");
        // }
        // System.out.println();
        // for(int i=0;i<n;i++){
        //     System.out.print(pse[i]+" ");
        // }
        int maxArea = 0;
        for(int i=0;i<n;i++){
            maxArea = Math.max(maxArea,heights[i]*(nse[i]-pse[i]-1));
        }
        return maxArea; 

        
    }
}