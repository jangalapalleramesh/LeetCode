class Solution {
    public int maxDiff(int num) {

        String newNums = String.valueOf(num);
        int a = Integer.MIN_VALUE;
        int b = Integer.MAX_VALUE;

        for(char c='0';c<='9';c++){
            String replaced = newNums.replace(c,'9');
            int value = Integer.parseInt(replaced);
            a = Math.max(value,a);
        }

        if(newNums.charAt(0) != '1'){
            for(char c='0';c<='9';c++){
                String replaced = newNums.replace(c,'1');
                int value = Integer.parseInt(replaced);
                b = Math.min(value,b);
            }
        }
        else{
            String newReplace = newNums.substring(1);
            int n = newReplace.length();
            for(char c='0';c<='9';c++){
                if(c=='1'){
                    continue;
                }
                String replaced = newReplace.replace(c,'0');
                int value = Integer.parseInt(replaced);
                b = Math.min(value,b);
            }
            b += Math.pow(10,n);

        }

        return a-b;
        
    }
}