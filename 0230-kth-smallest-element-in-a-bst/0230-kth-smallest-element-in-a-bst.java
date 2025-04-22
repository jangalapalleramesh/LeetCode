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
    private void inOrderTraversal(TreeNode root,List<Integer> output){
        if(root==null) return ;
        inOrderTraversal(root.left,output);
        output.add(root.val);
        inOrderTraversal(root.right,output);
    }
    public int kthSmallest(TreeNode root, int k) {
        List<Integer> output = new ArrayList<>();
        inOrderTraversal(root,output);
        return output.get(k-1);
    }
}