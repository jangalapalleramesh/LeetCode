class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        List<Integer> st = new ArrayList<>();
        int n = asteroids.length;
        for(int i=0;i<n;i++){
            if(asteroids[i]>0){
                st.add(asteroids[i]);
            }
            else{
                while(!st.isEmpty()&&st.get(st.size()-1)>0&&Math.abs(asteroids[i])>st.get(st.size()-1)){
                    st.remove(st.size()-1);
                }
                if(!st.isEmpty()&&Math.abs(asteroids[i])==st.get(st.size()-1)){
                    st.remove(st.size()-1);
                }
                else if(st.isEmpty()||st.get(st.size()-1)<0)st.add(asteroids[i]);
                
            }
        }
        int[] ans = new int[st.size()];
        for(int i=0;i<st.size();i++){
            ans[i]=st.get(i);
        }

        return ans;
        
    }
}