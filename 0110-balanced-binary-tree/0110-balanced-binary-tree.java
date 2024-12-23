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
    private int check(TreeNode root){
        if(root==null) return 0;
        int l = check(root.left);
        if(l==-1) return -1;
        int h = check(root.right);
        if(h==-1) return -1;
        if(Math.abs(l-h)>1)return -1;
        return 1+Math.max(l,h);
    }
    public boolean isBalanced(TreeNode root) {
        if(check(root)==-1) return false;
        return true;
        
        
    }
}