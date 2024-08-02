class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cou5 = 0,cou10 = 0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                cou5++;
            }
            else if(bills[i]==10){
                if(cou5<0) return false;
                cou10++;
                cou5--;
            }
            else{
                // cou10--;
                // cou5--;
                if(cou10==0 && cou5>=3){
                    cou5-=3;
                }
                else{
                    cou10--;
                    cou5--;
                }
            }

            if((cou10<0 && cou5<3) || cou5<0){
                return false;

            }
        }
        return true;
        
    }
};