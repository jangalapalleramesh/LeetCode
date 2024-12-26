class Solution {
    public void rotate(int[][] matrix) {
        //step 1 : transpose the matrix;
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(i<j)matrix[i][j] = matrix[i][j]+matrix[j][i] - (matrix[j][i]=matrix[i][j]);
            }
        }
        for(int i=0;i<matrix.length;i++){
            int l=0;
            int r = matrix[i].length-1;
            while(l<r){
                matrix[i][l] = matrix[i][l]+matrix[i][r] - (matrix[i][r]=matrix[i][l]);
                l++;
                r--;
            }
        }

        
    }
}