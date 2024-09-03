class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for(auto c : s){
            int n = c-96;
            cout<<" nnn=="<<n<<endl;;
            while(n>0){
                sum += n%10;
                n = n/10;
            }

        }
        cout<<"sum === "<<sum;
        k = k-1;
        int n=0;
        while(k>0){
            n = sum;
            sum = 0;
            while(n>0){
                sum += n%10;
                n = n/10;
                
            }
            k--;
        }
        
        return sum;
    }
};