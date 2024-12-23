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
    //using recursion method 1
    // public int maxDepth(TreeNode root) {
    //     if(root==null) return 0;

    //     int l = maxDepth(root.left);
    //     int r = maxDepth(root.right);

    //     return 1+Math.max(l,r);
        
    // }

    // method 2 using level order
    public int maxDepth(TreeNode root){
        if(root==null) return 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        int cou = 0;
        while(!q.isEmpty()){
            int len = q.size();
            for(int i=0;i<len;i++){
                root = q.poll();
                if(root.left!=null){
                    q.add(root.left);
                }
                if(root.right!=null){
                    q.add(root.right);
                }
            }
            cou++;
        }
        return cou;
    }
}