class Solution {
    public int[] vowelStrings(String[] words, int[][] queries) {
        int[] ans = new int[queries.length];
        int[] pre = new int[words.length+1];
        for(int j=0;j<words.length;j++){
                if("aeiou".indexOf(words[j].charAt(0))!=-1 && "aeiou".indexOf(words[j].charAt(words[j].length()-1))!=-1){
                    pre[j+1] = pre[j] + 1;
                }else{
                    pre[j+1] = pre[j];

                }
            }
        for(int i=0;i<queries.length;i++){
            int cou = 0;
            int l = queries[i][0];
            int r = queries[i][1];
            //check
            // for(int j=l;j<=r;j++){
            //     if("aeiou".indexOf(words[j].charAt(0))!=-1 && "aeiou".indexOf(words[j].charAt(words[j].length()-1))!=-1){
            //         cou++;
            //     }
            // }
            ans[i] = pre[r+1]-pre[l];
        }

        return ans;
        
    }
}