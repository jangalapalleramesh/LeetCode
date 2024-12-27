class Solution {
    public int maxScoreSightseeingPair(int[] values) {
        int n = values.length;
        int maxScore = 0;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         maxScore = Math.max(maxScore,values[i]+values[j]+i-j);
        //     }
            
        // }
        int maxi = values[0];
        for(int i=1;i<n;i++){
            maxScore = Math.max(maxScore,maxi+values[i]-i);
            maxi = Math.max(maxi,values[i]+i);
        }

        return maxScore;
        
    }
}