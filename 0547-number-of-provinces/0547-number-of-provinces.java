class Solution {
    private void dfs(int node,boolean[] vis,List<List<Integer>> graph){
        vis[node] = true;
        // travese all the neightbors 
        for(int it:graph.get(node)){
            if(!vis[it]){
                dfs(it,vis,graph);
            }
        }
    }
    public int findCircleNum(int[][] isConnected) {
        //I have to create graph from the input is Connected
        int v = isConnected.length;
        List<List<Integer>> graph = new ArrayList<>();
        for(int i=0;i<v;i++){
            graph.add(new ArrayList<>());
        }
        for(int i=0;i<v;i++){
            for(int j = 0;j<v;j++){
                if(isConnected[i][j]==1 && i!=j){
                    graph.get(i).add(j);
                }
            }
        }

        int provinces = 0;
        boolean[] vis = new boolean[v];
        for(int i=0;i<v;i++){
            if(!vis[i]){
                dfs(i,vis,graph);
                provinces++;
            }
        }

        return provinces;

        
    }
}