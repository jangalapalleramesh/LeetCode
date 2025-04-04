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
    static class Pair{
        TreeNode node;
        int d;
        Pair(TreeNode node,int d){
            this.node = node;
            this.d = d;
        }
    }

    private Pair findLCA(TreeNode curr){
        if(curr == null){
            return new Pair(null,0);
        }

        Pair left = findLCA(curr.left);
        Pair right = findLCA(curr.right);
        if(left.d == right.d ){
            return new Pair(curr,1+left.d);
        }
        else if(left.d>right.d){
            return new Pair(left.node,1+left.d);
        }
        else{
            return new Pair(right.node,1+right.d);
        }
    }
    public TreeNode lcaDeepestLeaves(TreeNode root) {
        
        Pair res = findLCA(root);
        return res.node;
        
        
    }
}