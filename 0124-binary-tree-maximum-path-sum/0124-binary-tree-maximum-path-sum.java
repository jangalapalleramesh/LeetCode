/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int fun(TreeNode root,int[] maxSum){
        if(root == null) return 0;
        int l = Math.max(0,fun(root.left,maxSum));
        int r = Math.max(0,fun(root.right,maxSum));
        maxSum[0] = Math.max(maxSum[0],l+r+root.val);
        return root.val+Math.max(l,r);
    }
    public int maxPathSum(TreeNode root) {
        int[] maxSum = new int[1];
        maxSum[0] = (int)-Math.pow(2,31);
        fun(root,maxSum);
        return maxSum[0];
        
    }
}