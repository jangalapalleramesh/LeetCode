class Solution {
public:
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length() - 1;

        //lamda function return true based condition written in code
        
        auto isVowel = [](char c) {
            c = tolower(c);
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        while (l < r) {
            if (isVowel(s[l]) && isVowel(s[r])) {
                swap(s[l], s[r]);
                l++;
                r--;
            } else if (!isVowel(s[l])) {
                l++;
            } else if (!isVowel(s[r])) {
                r--;
            }
        }
        
        return s;
    }
        
};