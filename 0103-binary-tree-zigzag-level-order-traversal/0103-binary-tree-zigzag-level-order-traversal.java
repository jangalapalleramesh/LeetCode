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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        if(root==null) return result;
        q.add(root);
        boolean flag = true;
        while(!q.isEmpty()){
            
            int size = q.size();
            List<Integer> sub = new ArrayList<>(size);
            for(int i=0;i<size;i++){
                root = q.poll();
                if(flag){
                    sub.add(root.val);
                }
                else{
                    sub.add(0,root.val);
                }
                if(root.left!=null){
                    q.add(root.left);
                }
                if(root.right!=null){
                    q.add(root.right);
                }
            }
            flag = !flag;
            result.add(sub);
        }

        return result;

        
    }
}