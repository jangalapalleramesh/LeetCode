class Solution {
    public int minOperations(int[][] grid, int x) {
        int rows = grid.length;
        int cols = grid[0].length;
        int mid = (rows*cols)/2;
        int[] arr = new int[rows*cols];
        int k = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                arr[k] = grid[i][j];
                k++;
            }
        }
        int remainder = arr[0]%x;
        for(int i=0;i<arr.length;i++){
            if((arr[i]%x)!= remainder){
                return -1;
            }
        }
        Arrays.sort(arr);
        int t = arr[mid];
        int cou = 0;
        for(int i=0;i<arr.length;i++){
            
            cou += (Math.abs(t-arr[i])/x);
            
           
        }

        return cou;
        
    }
}