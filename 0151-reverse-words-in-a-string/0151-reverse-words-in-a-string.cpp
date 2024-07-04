class Solution {
public:
    string reverseWords(string s) {
        // Remove leading and trailing spaces
        trim(s);
        
        // Split the string into words
        vector<string> words = split(s);
        
        // Reverse the words
        reverse(words.begin(), words.end());
        
        // Join the words back into a single string with a single space between each word
        string result = join(words);
        
        return result;
        
    }

private:
    void trim(string &s){
        int start = s.find_first_not_of(' ');
        int end = s.find_last_not_of(' ');
        s = (start == string::npos)?"":s.substr(start,end-start+1);
    }

    // spilt function string into word

    vector<string> split(const string &s){
        vector<string> words;
        istringstream iss(s);
        string word;
        while(iss >> word){
            words.push_back(word);
        }

        return words;

    }

      // Function to join words into a single string
    string join(const vector<string> &words) {
        string result;
        for (const string &word : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += word;
        }
        return result;
    }
};