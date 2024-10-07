class Solution {
public:
    int minLength(string s) {
        // int flag = 1;
        // while(flag){
        //     flag = 0;
        //     string temp = "";
        //     int i=0;
        //     while(i<s.size()){
        //         if(i<s.size()-1 && (s[i]=='A'&&s[i+1]=='B')||(s[i]=='C'&&s[i+1]=='D')){
        //             i++;
        //             flag = 1;
        //         }
        //         else{
        //             temp += s[i];
                    
        //         }
        //         i++;
        //     }
        //     s = temp;
        // }
        //tc is O(n^2)
        //so will go with better approach 
        if(s.empty()) return 0;
        stack<int> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty() && ((s[i]=='B'&& st.top()=='A')||(s[i]=='D' && st.top()=='C'))){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        
        return st.size();
        
    }
};