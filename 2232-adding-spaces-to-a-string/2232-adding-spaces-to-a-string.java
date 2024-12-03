class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder res = new StringBuilder();
        int j = 0;  // Pointer for spaces array
        
        for (int i = 0; i < s.length(); i++) {
             // Append character from string
            if (j < spaces.length && (i == spaces[j])) { // Check if space is needed
                res.append(" ");
                j++;
            }
            res.append(s.charAt(i));
        }
        
        return res.toString();
    }
}
