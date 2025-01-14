class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int n = A.length;
        Set<Integer> seenA = new HashSet<>();
        Set<Integer> seenB = new HashSet<>();
        int[] res = new int[n];
        int commonCount = 0;
        for(int i=0;i<n;i++){
            seenA.add(A[i]);
            seenB.add(B[i]);
            if(seenA.contains(B[i])){
                commonCount++;
            }
            if(seenB.contains(A[i]) && A[i]!=B[i]){
                commonCount++;
            }
            res[i] = commonCount;
        }
        return res;
        
    }
}