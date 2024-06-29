class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0,read = 0;
        int n = chars.size();
        while(read<n){
            char currentChar = chars[read];
            int count = 0;
            while(read<n && currentChar == chars[read]){
                read++;
                count++;
            }

            chars[write++]=currentChar;

            if(count>1){
                for(char c:to_string(count)){
                chars[write++] = c;
            }
            }
        }

        return write;
        

        
        
    }
};