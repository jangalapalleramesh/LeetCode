class Solution {
public:
    vector<int> findNSE(vector<int>& arr){
        stack<int> st;
        int n = arr.size();
        vector<int> nse(n);
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }

            nse[i] = st.empty()?n:st.top();

            st.push(i);
        }
        return nse;
    }
    vector<int> findPSE(vector<int>& arr){
        stack<int> st;
        int n = arr.size();
        vector<int> pse(n);
        for(int i = 0;i<n;i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }

            pse[i] = st.empty()?-1:st.top();

            st.push(i);
        }

        return pse;
    }
    int sumSubarrayMins(vector<int>& arr) {

        vector<int> nse = findNSE(arr);
        vector<int> pse = findPSE(arr);
        int total = 0;
        int left =0,right = 0;
        int mod = int(1e9 + 7);
        int n = arr.size();

        for(int i=0;i<n;i++){
            left = i-pse[i];
            right = nse[i] - i;
            total = (total + (right*left*1LL*arr[i])%mod)%mod;

        }

        return total;
        
    }
};