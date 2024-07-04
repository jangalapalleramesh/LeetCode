class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1;
        int cou =0;
        bool foundLastWord = false;
        for (int i = n - 1; i >= 0; --i) {
        // If a character is not a space and we haven't found the last word yet,
        // it means we've started encountering the last word
            if (!isspace(s[i]) && !foundLastWord) {
                foundLastWord = true;
            }

            // If we have already found the last word and the current character is not a space,
            // increment the length
            if (foundLastWord && !isspace(s[i])) {
                cou++;
            }

            // If we have found the last word and encountered a space, it means the last word ended,
            // so we break out of the loop
            if (foundLastWord && isspace(s[i])) {
                break;
            }
        }
        // cout<<s.size();
        return cou;
        
    }
};