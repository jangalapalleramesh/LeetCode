class Solution {
    public int[] minOperations(String boxes) {
        int n = boxes.length();
        int ans[] = new int[n];
        int count = 0;
        // for(int i=0;i<n;i++){
        //     count = 0;
        //     for(int j=0;j<n;j++){
        //         if(boxes.charAt(j)=='1') count += Math.abs(j-i);
        //     }
        //     ans[i] = count ;

        // }
        List<Integer> indexOfOnes = new ArrayList<Integer>();
        for(int i=0;i<n;i++){
            if(boxes.charAt(i)=='1'){
                indexOfOnes.add(i);
            }
        }
        for(int i=0;i<n;i++){
            count = 0;
            for(int num:indexOfOnes){
                count += Math.abs(num-i);
            }
            ans[i] = count;

        }
        return ans;
        
    }
}