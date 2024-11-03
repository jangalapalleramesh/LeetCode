class Solution {
    public int[] nextGreaterElements(int[] nums) {
        int n = nums.length;
        //List<Integer> nge = new ArrayList<>(Collections.nCopies(n, 0));
        int[] nge = new int[n];
        Stack<Integer> st = new Stack<>();
        
        for(int i=2*n-1;i>=0;i--){
            while(!st.isEmpty() && st.peek()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
                nge[i] = (!st.isEmpty())?st.peek():-1;
            }
            st.push(nums[i%n]);
        }
        return nge;
        
    }
}