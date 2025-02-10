class Solution {
    public String clearDigits(String s) {
        StringBuilder ans = new StringBuilder();
        int n = s.length();
        
        for(int i=0;i<n;i++){
            if(Character.isDigit(s.charAt(i))){
                if(!ans.isEmpty()){
                    ans.deleteCharAt(ans.length()-1);
                }
            }
            else if(Character.isLetter(s.charAt(i))){
                ans.append(s.charAt(i));
            }
        }

        return ans.toString();
        
    }
}