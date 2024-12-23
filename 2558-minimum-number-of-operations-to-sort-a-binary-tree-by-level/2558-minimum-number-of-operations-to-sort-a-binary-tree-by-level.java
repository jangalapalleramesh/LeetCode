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
 class Pair {
        int value, index;

        Pair(int value, int index) {
            this.value = value;
            this.index = index;
        }
    }
class Solution {
    public int minimumSwapsToSort(List<Integer> numbers) {
        int n = numbers.size();
        
        // Create an array of pairs (value, index)
        Pair[] indexedArr = new Pair[n];
        for (int i = 0; i < n; i++) {
            indexedArr[i] = new Pair(numbers.get(i), i);
        }
        
        // Sort the pairs by value
        Arrays.sort(indexedArr, Comparator.comparingInt(pair -> pair.value));
        
        // Track visited elements
        boolean[] visited = new boolean[n];
        int swaps = 0;
        
        for (int i = 0; i < n; i++) {
            // If already visited or already in the correct position, skip
            if (visited[i] || indexedArr[i].index == i) {
                continue;
            }
            
            // Find the cycle
            int cycleSize = 0;
            int x = i;
            while (!visited[x]) {
                visited[x] = true;
                x = indexedArr[x].index; // Move to the index of the current element
                cycleSize++;
            }
            
            // Add the number of swaps for this cycle
            if (cycleSize > 1) {
                swaps += (cycleSize - 1);
            }
        }
        
        return swaps;
    }
    public int minimumOperations(TreeNode root) {
        List<List<Integer>> ansList = new ArrayList<>();
        Queue<TreeNode> q = new LinkedList<>();
        q.add(root);
        while(!q.isEmpty()){
            
            int h = q.size();
            List<Integer> sub = new ArrayList<>();

            for(int i=0;i<h;i++){
                root = q.poll();
                sub.add(root.val);
                if(root.left!=null){
                    q.add(root.left);
                }
                if(root.right!=null){
                    q.add(root.right);
                }

            }
            ansList.add(sub);
            
        }
        int ans = 0;
        for(int i=0;i<ansList.size();i++){
            ans += minimumSwapsToSort(ansList.get(i));
        }

        return ans;
    }
}