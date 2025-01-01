class Solution {
    public int maxScore(String s) {
        int score = 0;
        int left = 0;
        int right = 0;
        if(s.charAt(0)=='0')left++;
        for(int i=1;i<s.length();i++){
            if(s.charAt(i)=='1'){
                right++;
            }
        }
        score = left+right;
        for(int i=1;i<s.length()-1;i++){
            if(s.charAt(i)=='0')left++;
            if(s.charAt(i)=='1')right--;
            score = Math.max(score,left+right);
        }

        return score;
        
    }
}